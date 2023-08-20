#include <stdio.h>

int main() {
    // 2D Array - matrix

    int matrix[3][4] = {
            {10, 20, 30, 40},
            {15, 25, 35, 45},
            {8,  18, 28, 28},
    };


    printf("%i\n", matrix[1][2]);


    // Designated initializers
    // all other entries will be zero
    int designated_matrix[4][3] = {
            [0][0] = 1,
            [1][1] = 5,
            [2][2] = 9,
    };

    // 3D Array -
    printf("%i\n", designated_matrix[1][2]);
    printf("%i\n", designated_matrix[1][1]);


    printf("Hello, World!\n");
    return 0;
}
