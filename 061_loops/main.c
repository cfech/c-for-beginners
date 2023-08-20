#include <stdio.h>
#include "while.h"
#include "goto.h"

int main() {

    // example about loops, also shows how to define and import methods from another file

    for (int i = 0; i < 10; i++) {
        printf("%i\n", i);
    }

    printf("======= Reverse ===========\n");

    for (int j = 10; j > 0; j--) {
        printf("%i\n", j);
    }

    printf("======= Nested ===========\n");

    for (int k = 1; k < 6; k++) {
        for (int l = 1; l < 10; l++) {


            // Continue to next iteration of the loop
            if (l * k % 2 == 0) {
                continue;
            }

            // break when l reaches 8
            if(l > 8) {
               break;
            }
            printf("%i * %i = %i\n", k, l, k * l);

        }
    }

    printf("======= Inline Modification ===========\n");

    int sum = 0;
    for (int m = 0; m < 10; m++) {
        sum += m;
    }
    printf("%s: % i \n", "Sum", sum);

    // or could do this in one line


    int sum2 = 0;
    for (int n = 0; n < 10; sum2 += n++);

    printf("%s: % i\n", "Sum2", sum2);

    // could also create an infinite loop by
//    for(;;){
//        printf("infinite");
//    }

    while_example();

    goto_example();

    return 0;


}
