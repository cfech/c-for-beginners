#include <stdio.h>
#include <math.h>

int gcd(int n1, int n2);

float my_abs(float n3);

float my_sqrt(float  n4);

int main() {

    int divisor = gcd(100, 1000);

    printf("The gcd is: %i\n", divisor);

    float absolute_value = my_abs(-12903.28947);
    printf("The absolute value is: %.2f\n", absolute_value);

    float square_root = my_sqrt(225);
    printf("The square root is: %.2f\n", square_root);


    return 0;
}


int gcd(int n1, int n2) {
    int common1[n1];
    int common2[n2];


    for (int i = 0; i <= n1 ; i++) {
        if (n1 % i == 0) {
            common1[i] = i;
        } else{
            common1[i] = 0;
        }
    }

    for (int i =0; i <= n2 ; i++) {
        if (n1 % i == 0) {
            common2[i] = i;
        } else {
            common2[i] = 0;
        }
    }


    if( n1 > n2){
        for (int i = n1; i > 0; i --) {
            if(common1[i] != 0 && common1[i] == common2[i]){
                return i;
            }
        }
    }else{
        for (int i = n2; i > 0; i --) {
            if(common2[i] != 0 && common1[i] == common2[i]){
                return i;
            }
        }
    }



    printf("tmp");

    return 0;

}


float my_abs(float n3){
    if(n3 == 0){
        return 0;
    }

    if(n3 > 0){
        return n3;
    }

    float tmp = n3 * -1;

    return tmp;
}

float my_sqrt(float n4){

    if(n4 <= 0){
        printf("Cannot handle -1");
        return -1;
    }

    return pow(n4, (.5));
}