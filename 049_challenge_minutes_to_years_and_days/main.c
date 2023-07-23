#include <stdio.h>

int main() {
    printf("Please enter a number of minutes\n");

    double input;

    scanf("%lf", &input);

    double mins_in_year = 525600;
    double mins_in_day = 1440;

    double years = input/mins_in_year;

    double days = input / mins_in_day;

    printf("%lf minutes is %lf years or %lf days", input, years, days);


}
