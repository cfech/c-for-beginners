
#include <stdio.h>

void while_example() {

    printf("====== While =======\n");
    int count = 0;


    while (count < 5) {
        printf("while %i \n", count);
        count += 1;
    }

    printf("====== Do While =======\n");

    int count2 = 0;

    // Because the check for the condition is at the bottom, the loop will always be executed at least 1 time
    // Known ad a post test loop
    do {
        printf(" do while %i \n", count2);
        count2 += 1;
    } while (count2 < 5);


}