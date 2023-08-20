#include <stdio.h>

#define MONTHS  12
#define YEARS  5

int main() {


    float rainFall[YEARS][MONTHS] = {
            {2, 3, 4, 7, 7, 3, 7, 7, 3, 3, 4, 4},
            {2, 3, 4, 7, 7, 3, 7, 7, 3, 3, 4, 4},
            {2, 3, 4, 7, 7, 3, 7, 7, 3, 3, 4, 4},
            {2, 3, 4, 7, 7, 3, 7, 7, 3, 3, 4, 4},
            {2, 3, 4, 7, 7, 3, 7, 7, 3, 3, 4, 4},
    };

    float year_totals[YEARS];
    int years[YEARS] = {2010, 2011, 2012, 2013, 2014};


    float month_averages[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    char *months[] = {
            "Jan", "Feb", "Mar", "Apr", "May", "June",
            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };


    float complete_total = 0;

    // Print the matrix
    for (int i = 0; i < YEARS; i++) {
        float total_per_year = 0;

        for (int j = 0; j < MONTHS; j++) {

            complete_total += rainFall[i][j];
            total_per_year += rainFall[i][j];


            float current_month = month_averages[j];
            current_month += rainFall[i][j];
            month_averages[j] = current_month;


        }

        year_totals[i] = total_per_year;
    }

    float yearly_average = complete_total / YEARS;

    for (int k = 0; k < MONTHS; k++) {
        month_averages[k] = month_averages[k] / YEARS;
    }


    printf("YEAR   RAINFALL (Inches)\n");

    for (int i = 0; i < YEARS; ++i) {
        printf("%i    %.2f \n", years[i], year_totals[i]);
    }


    printf("The average per year is %.2f\n\n", yearly_average);


    for (int i = 0; i < MONTHS; ++i) {
        printf("%s   ", months[i]);
    }

    printf("\n");

    for (int i = 0; i < MONTHS; ++i) {
        printf("%.2f  ", month_averages[i]);
    }


    return 0;
}
