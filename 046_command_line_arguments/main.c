#include <stdio.h>


// Can pass cli args through the main method
// argc is number of arguments
// *argv is a string array of the arguments
// *argv = argument vector
int main(int argc, char *argv[]) {

    int numOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("There are %i arguments\n", numOfArgs);
    printf("Argument 1: %s \n", argument1);
    printf("Argument 2: %s \n", argument2);



    return 0;
}