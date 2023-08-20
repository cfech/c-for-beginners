#include <stdio.h>
#include <stdlib.h>


void print_string_with_line(const char *s) {
    printf("%s", s);
    printf("\n");
}

void check_even_or_odd() {
    int number_to_test, remainder;
    char num_str;

    while (1) {


        printf("Enter a number to be tested or 0 to quit: ");

        // read in an int from the stdin and put it in the memory location hat is referenced by number_to_test
        scanf("%s", &num_str);


        if ('q' == num_str) {
            printf("googbye");
            break;
        }

        number_to_test = atoi(&num_str);

        remainder = number_to_test % 2;


        if (remainder == 0) {
            print_string_with_line("The number is even. \n");
        } else {
            print_string_with_line("The number is odd");
        }
    }
}


void checkEvenOrNot(int num) {
    // goto statement
    // allows you to jump to a specific line
    // made of up of 2 piece, the label name and goto
    // no many valid use cases, maybe jumping out of nested loops

    if (num % 2 == 0)
        // jump to even
        goto even;
    else
        // jump to odd
        goto odd;

    //this it the label
    even:
    printf("%d is even", num);

    // return if even
    return;
    odd:
    printf("%d is odd", num);
}

int main() {

//    check_even_or_odd();

    // goto statement
    // allows you to jump to a specific line
    // made of up of 2 piece, the label name and goto
    // no many valid use cases, maybe jumping out of nested loops
    checkEvenOrNot(3);

    // switch
    int switch_num;
    print_string_with_line("Please enter a number");
    scanf("%i", &switch_num);

    switch (switch_num) {
        case 10:
            print_string_with_line("10");
            break;
        case 20:
            print_string_with_line("20");
            break;
        case 30:
            print_string_with_line("30");
            break;
        default:
            print_string_with_line("Something else");
            break;
    }


    // Ternary operator
    3 > 2 ? print_string_with_line("true") : printf("false");


    return 0;
}




