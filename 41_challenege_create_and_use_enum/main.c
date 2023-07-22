#include <stdio.h>

int main() {
//    printf("Hello, World!\n");

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY = 11, MICROSOFT};

    enum Company var1 = XEROX;
    enum Company var2 = GOOGLE;
    enum Company var3 = EBAY;

    // Enum values are integers, can format them as
    // %i - integer value
    // %d - integer as a signed decimal (more flexible)
    printf("%i \n", var1);
    printf("%d \n", var2);
    printf("%d \n", var3);


    // Not part of the challenge, just playing with if
    if(var2 == FACEBOOK){
        printf("facebook");
    } else if(var2 == EBAY){
        printf("Ebay");
    } else{
        printf("something else");
    }


    return 0;
}
