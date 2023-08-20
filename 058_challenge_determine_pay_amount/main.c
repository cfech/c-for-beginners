#include <stdio.h>

// Pre-processor directing to create constant to avoid scoped variables or magic numbers
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define REMAINDER_TAX_RATE .25
#define FULL_TIME_HOURS 40

int main() {

    int hours_worked;
    double over_time_rate = PAYRATE * 1.5;
    double gross_pay = 0.0;
    double total_tax = 0.0;
    double net_pay = 0.0;

    double remaining_tax;
    int remaining_pay = 0;

    printf("Please enter the number of hours you worked this week\n");
    scanf("%i", &hours_worked);

    if(hours_worked < 0){
        printf("Please enter a positive number");
        return -1;
    }

    if (hours_worked > FULL_TIME_HOURS) {
        int over_time_hours = hours_worked % FULL_TIME_HOURS;
        gross_pay = (FULL_TIME_HOURS * PAYRATE) + (over_time_hours * over_time_rate);
    } else {
        gross_pay = hours_worked * PAYRATE;
    }



    if (gross_pay <= 300) {
        total_tax = gross_pay * TAXRATE_300;
    } else if (gross_pay <= 450) {
        double tax_first_300 = 300 * TAXRATE_300;

        // cannot modulo double value
        remaining_pay = (int) gross_pay - 300;
        remaining_tax = remaining_pay * TAXRATE_150;

        total_tax = tax_first_300 + remaining_tax;

    } else {
        double tax_first_300 = 300 * TAXRATE_300;
        double tax_next_150 = 150 * TAXRATE_150;

        remaining_pay = (int) gross_pay - 450;
        remaining_tax = remaining_pay * REMAINDER_TAX_RATE;

        total_tax = tax_first_300 + tax_next_150 + remaining_tax;
    }

    printf("\nGross Pay:");
    printf("%.2f", gross_pay);

    printf("\nTaxes Paid: ");
    printf("%.2f", total_tax);

    net_pay = gross_pay - total_tax;

    printf("\nNet Pay: ");
    printf("%.2f", net_pay);
}
