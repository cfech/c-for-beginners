// # Pre-processor directive #
// Tells the compiler we must do this before compiling
// # Must be the first non-space character in a line
// could be anywhere in the code
// Include is just one pre-processor command, it is similar to the import statement in java
// There is constants,and macros with #define
// conditional logic with #ifdeg, #enddef, #else, #ifndef

// ## Header Files ##
// You usually include file names ending in .h - header file
// Header files define information about the methods in this library
// Header files allow for re-use
// could include <> (for standard c libraries) or "" for custom files in the current directory
// Header files can include typedefs, function proptotypes/signatures, #define directives (for transitive dependencies), structure definitions etc...
// Header files usually will not contain actual source code (though they can)

// ## STDIO ##
// stdio.h contains the information that the compiler needs to understand what printf() means
// stdio = standard input/output
// stdio is a c standard library
#include <stdio.h>


/*
 * Multi line comment
 */


// Main method of the c program
// Must return an int

// Function do not use semicolons
// Main function is the entry point to all c programs
int main() {
    int myFavoriteNumber = 0;
    char myString[20];

    // Displays ouput to the stdout
    // Standard library from the stdio
    printf("Please enter your favorite number and a string \n");



    // will take in input from the user in and assign it the myFavoriteNumber variable
    // scanf takes input from the stdin
    // can specific format with the first argument
/**
%c			Character
%d			Signed integer
%e or %E	Scientific notation of floats
%f			Float values
%g or %G	Similar as %e or %E
%hi			Signed integer (short)
%hu			Unsigned Integer (short)
%i			Unsigned integer
%l or %ld or %li	Long
%lf			Double
%Lf			Long double
%lu			Unsigned int or unsigned long
%lli or %lld	Long long
%llu		Unsigned long long
%o			Octal representation
%p			Pointer
%s			String
%u			Unsigned int
%x or %X	Hexadecimal representation
%n			Prints nothing
%%			Prints % character
 */

    // Second argument is a pointer/reference to the variable
    // & is used for every variable type except for strings
    // Uses whitespace to decide how to divide the input into separate fields
    // Read in double with %lf
    // Can read in multiple values at 1 time that are seperated by spaces
    scanf("%d %s", &myFavoriteNumber, myString);

    // %d is a format specifier
    printf("You entered number: %d : %s\n", myFavoriteNumber, myString);


    // When zero is returned it may signify there is no errors
    // This is the exit code
    return 0;
}
