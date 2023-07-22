#include <stdio.h>
#include <stdbool.h>

void myFunc(){
    printf("A separate function");
}


int main() {

    // variables can start with underscore or character
    // Everything is a primitive in c as there are no objects
    int _myflag = 1;
    double myFla3G = 1.0;


    // can create multiple variables at 1 time if they are the same type
    // will set x, y, z to 10
    int x,y,z = 10;

    // Defined
    char ch;
    // Initialized
    ch='A';


    // ========= 0-39 Basic Data Types =========

    // Signed integer, can be zero, positive or negative
    int myInt = 1;
    int myNegativeInt = -1;

    // If preceded by a 0x (case-insensitive) the value is expressed in hexadecimal notation
    int myHex = 0xFFEF0D;

    // Short and long can change the size of primitive memory spaces, can use with any primitives

    // Short ints will use less memory than regular ints,
    short int myShortInt = 2;

    // Long int will use more memory than regular ints
    // max int value normally is: 2147483647
    long int myLongInt = 2147483648;

    // Unsigned says it will nto have a negative sign, hence freein up more memory to be used
    unsigned int myUnsignedInt = 10;

    // Can store data for floating point numbers
    float myFloat = 1.1f;
    // Floats can be used to define floating point constants in scientific notation
    // All floats are taking as double by the compiler so have to use 'f' to represent a float
    float myScientificNotation = 1.7e+4f;

    // Stores decimals
    // Twice as large as a float in memory
    // Most computers use 64 bits/8 Bytes
    double myDouble = 1.111;
    char myChar = 'B';

    // Can be used to store 0 or 1
    // 0 = False, 1 = True
    _Bool myBool = 0;
    // From c99+ you can use true false
    _Bool myBool2 = true;
    // Have to include the stdbool library to use booleans, introduced in c99
    bool myImportedBool = true;

    // ======= 040 - Enums and Chars =========

    // Allow a programmer to define a variable and specify the valid values that could be stored in that variable
    // Could explicitly assign values if you want
    // red = 1
    // yellow = 10
    // blue = 11
    enum myEnum {red, yellow = 10, blue};

    // Can then declare a variable of this type
    // Can only be equal to red yellow or blue
    // Under the hood this will actually be represented as an int
    enum myEnum myEnumVariable = yellow;


    // Char represents single characters, such as a digit, letter or symbol
    // This is not a string
    char  myLetter = 'A';
    char  myCharNum = '6';
    char  myCharSymbol = '$';
    char myAsciiChar = 65; // 65 = A

    // Can have escape chars/sequences
    char myEscapeNewLine = '\n';
    char myEscapeTab = '\t';



    // =========== 43 Format Specifiers =============
    // Format specifier, specify the type of data that is being displayed
    // Start with a %

    /**
    * Type	             Size (bytes)	                     Format Specifier
    int	                at least 2, usually 4	                 %d, %i
    char	             1	                                     %c
    float	             4	                                     %f
    double	             8	                                     %lf, %e
    short int	         2 usually	                             %hd
    unsigned int        at least 2, usually 4	                 %u
    long int	        at least 4, usually 8	                 %ld, %li
    long long int	        at least 8	                         %lld, %lli
    unsigned long int	    at least 4	                         %lu
    unsigned long long int	at least 8	                         %llu
    signed char           	1	                                 %c
    unsigned char	        1	                                 %c
    long double	      at least 10, usually 12 or 16	             %Lf
*/

    printf("IntegerVar = %i\n", myInt);
    printf("Could also use (percent)d for IntegerVar = %d\n", myInt);
    printf("floatingVar = %f\n", myFloat);
    printf("doubleVar %e", myDouble);
    printf(" could also use (percent) lf doubleVar %lf", myDouble);
    printf("charVar = %c \n", myChar);
    // Bools are either 0 or 1;
    printf("boolVar = %i \n", myBool);

    // Width specifier can limit the number of decimals
    // The .4 here will say only print to 4 decimals
    double longDouble = 3.99358349758;
    printf("doubleVar %.4lf \n", longDouble);



    printf("Hello, World!\n");


    // Calling a separate function, must be defined above where it is called in the file
    myFunc();

    return 0;
}



