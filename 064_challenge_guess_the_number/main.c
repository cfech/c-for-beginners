#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("Hello, World!\n");

    // initializing random number generator with the current time as a seed to reduce chances of generating the same number
    time_t t;
    srand((unsigned) time(&t));

    printf("%li \n",time(&t));

    int random_number = rand() % 20;;

    int guesses = 1;

    while (1) {

        if (guesses > 5) {
            printf("Sorry you are out of guesses, the number was: %i", random_number);
            break;
        }


        printf("Please enter a number between 0 and 20.\n");

        int number = 0;
        scanf("%i", &number);

        if (number > 20 || number < 0) {
            continue;
        }

        if (number == random_number) {
            printf("That is correct!\n");
            break;
        } else if (number > random_number) {
            printf("Too high!\n");
        } else {
            printf("Too low!\n");
        }

        guesses += 1;
    }

    return 0;

}
