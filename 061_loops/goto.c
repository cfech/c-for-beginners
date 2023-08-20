#include <stdio.h>

void goto_example(){

   printf("====== GOTO =======");

    for (int k = 1; k < 10; k++) {
        for (int l = 1; l < 10; l++) {
            for (int m = 1; m < 10; m++) {
                int total = k * l * m;

                if(total> 25){
                    goto my_label;
                }else{
                    printf("%i * %i * %i = %i \n",k, l, m, total );
                }
            }
        }
    }

    my_label: printf("Broken all loops with goto");
}