#include <stdio.h>

int main() {

    int primes[100] = {2};

    int number = 3;
    int index = 1;

    while (index < 100) {
        if (number % 2 == 0) {
            number += 1;
            continue;
        }

        int loop = number/2;
        for (int i = 2; i < loop; i++) {
            if (number % i == 0) {
                goto increment;
            }
        }

        primes[index] = number;
        index += 1;

        increment:
        number += 1;
    }

    printf("The first 100 primes are: ");

    for (int i = 0; i < 100; i++) {
        printf("%i ", primes[i]);
    }


    return 0;
}
