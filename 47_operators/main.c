#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    // Operators are functions that use a symbolic name
    // Perform mathematical or logical functions
    // They are predefined in c
    // A logical operator or Boolean Operator, returns a boolean result that is based on the boolean result of one or two other expressions
    // An arithmetic operator is a mathematical function that takes two operands and performs a calculation on them +, -, *, /, %

    // Other operators include assignment =
    // relational <,>,!=
    // bitwise <<, >>, ~


    //Statements form the basic program steps of c, most statemens are constructed from expressions

    // Expressions consist of a combination of operators and operands
    // operands are what an operator operates on
    // operands can be constants, variables or combination of the two
    // every expression has a value

    // Statements are the building blocks of a program
    // A program is a series of statements with special syntax ending with a semicolon (simple statements)

    // Declaration statement: int Jason;
    // Assignment Statement: Jason = 5;
    // Function call statement: printf("Jason")
    // Structure statement while(Jason < 20) Jason = Jason + 1;
    // Return Statement: return 0;

    // Statements end with semicolon

    // Compound Statements: 2 or more statements grouped together by closing them in braces (block)

    // ======= 48 - Basic Operators ==========

    // Arithmetic operator
    // +
    // -
    // *
    // /
    // %
    // ++ increment
    // -- decrement

    int a = 33;
    int b = 15;

    int result = 0;

    result = a + b;

    printf("%i\n", result);

    result = a * b;

    printf("%i\n", result);

    result = a - b;

    printf("%i\n", result);

    result = a / b;

    printf("%i\n", result);

    result = a % b;

    printf("%i\n", result);

    // Logical Operator

    //&&
    //||
    // !

    printf("%i\n", a == 33 || b == 33);
    printf("%i\n", a == 33 && b == 33);

    printf("%i\n", a == 33 && b != 33);



    // Assignment Operator

    //=
    // +=
    // -=
    // *=
    // /=
    // &/

    // Bitwise Operators
    // <<= shift left and assignment
    // >>= shift right and assignment
    // &= Bitwise AND assignment
    // ^= Bitwise exclusive OR and assignment
    // |= Bitwise inclusive OR and assignment


    // Relational Operator

    // ==
    // !=
    // <
    // >
    // >=
    // <=



    return 0;
}
