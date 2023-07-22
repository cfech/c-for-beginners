#include <stdio.h>

int main() {

    // There is no string in c, a string is an array of chars
    char name[20];

    printf("Please enter your name\n");

    scanf("%s", name);

    printf("Your name is: %s", name);
    return 0;
}
