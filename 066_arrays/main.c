#include <stdio.h>

int main() {
    // Arrays are a fixed size after they are created
    // All types in the array must be the same

    int count = 10;
    int myIntArry[count];

    myIntArry[0] = 10;
//
//    printf("%i\n", myIntArry[0]);
//    printf("%i\n", myIntArry[1]);

    // have to divide size of by the size of the data type as sizeof returns the amount of bytes
//    printf("%i\n", sizeof myIntArry/sizeof( int));


    for (int i = 0; i < count ; i++) {
        printf("%i\n", myIntArry[i]);
    }


    // ========================= INITIALIZATION =================================

    int initialized_array[5] = {1, 2, 3, 4, 5};

    printf("%i\n",initialized_array[3]);


    printf("======= Partially================\n");
    // the rest will be 0
    double partially_initialized[10] = {1.23, 4.56, 6.78};

    for (int j = 0; j < count; j++) {
        printf("%f\n", partially_initialized[j]);
    }

    printf("======= Designated Initializer ================\n");
    double designated[10] = {[2] = 1.23, [1] = 4.56, [0] = 6.78};

    for (int j = 0; j < count; j++) {
        printf("%f\n", designated[j]);
    }


    printf("Hello, World!\n");
    return 0;
}
