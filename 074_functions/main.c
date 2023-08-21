#include <stdio.h>


// best practice to declare all functions at the top of the file
void add();

void multiply(int x, int y);

int subtract(int a, int b);

// main is where the program begins
// a C program have a main
// can pass args from cli
int main() {

    add();
    multiply(10, 20);
    multiply(30, 20);
    multiply(10, 2);

    int result = subtract(3, 2);

    printf("The result of the subtraction is: %i\n", result);

    return 0;
}

/**
 * This a a multi line comment that explains what this function is
 */

void add(){
    printf("adding\n");
}

void multiply(int x, int y){

    // static variables are shared between function calls
    static int count;
    count +=1;

    int res = x * y;
    printf("The product of %i multiplied by %i is: %i\n", x, y, res);

    printf("This function has been called %i times\n", count);
}

int subtract(int a, int b){
    return a - b ;
}
