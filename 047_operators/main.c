#include <stdio.h>

int main() {
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

    printf("Addition %i\n", result);

    result = a * b;

    printf("Multiplication %i\n", result);

    result = a - b;

    printf("Subtraction%i\n", result);

    result = a / b;

    printf("Division %i\n", result);

    result = a % b;

    printf("Modulus %i\n", result);

    // Logical Operator

    //&&
    //||
    // !

    printf("OR %i\n", a == 33 || b == 33);
    printf("And %i\n", a == 33 && b == 33);

    printf("And Not %i\n", a == 33 && b != 33);



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



    // ============= 50 Bitwise =============
    // Bitwise logical operators and shift operators
    // Operate on bits in integer values
    // Once major use of the bitwise AND & and the bitwise OR | is in operations to test and set individual bits in an integer variable
    // Can use individual bits to store data that involve one of two choices
    // 8 bits per byte
    // Max number in 8 bits = 255, 4 bits = 15

    /**
    &  ==> bitwise AND - copies a bit to the result if it exists in both operands
    |  ==> bitwise OR - copies a bit to the result if it exists in either operand
    ^  ==> bitwise XOR -  copies a bit to the result if it exists in in 1 operand but not both
    ~  ==> bitwise NOT - has the effect of flipping a bit
    << ==> bit shift left - The left operands value is moved left by the number of bits specified by the right operand
    >> ==> bit shift right -The left operand value is moved right byt he number of bits specific by the right operand
     */

    // Binary table
    //   0    0    0    0    0    0    0    0
    //  128   64   32   16   8    4    2    1


    unsigned int a2 = 60; // 0011 1100
    unsigned int b2 = 13; // 0000 1101

    //& will both be true if the bit is 1
    // 0000 1100 = 12
    unsigned int bitwiseAND = 0;
    bitwiseAND = a2 & b2;

    printf("BITWISE & %i \n", bitwiseAND);

    // | will turn on bits if either is true
    //0011 1101 = 61
    unsigned int bitwiseOR = a2 | b2;
    printf("BITWISE | %i \n", bitwiseOR);


    // ^ XOR will turn on bits if either is true
    //0011 0001 = 49
    unsigned int bitwiseXOR = a2 ^ b2;
    printf("BITWISE ^ %i \n", bitwiseXOR);

    // ~ will invert all the bits
    //1100 0011 = -61? not sure how this one is working
    unsigned int bitwiseNot = ~a2;
    printf("BITWISE ~ %i \n", bitwiseNot);

    // << Shifting left
    // original = 0011 1100 << = 1111 0000 = 240
    unsigned int bitwiseShiftLeft = a2 << 2;
    printf("BITWISE << %i \n", bitwiseShiftLeft);

    // << Shifting left
    // original = 0011 1100 >> = 0000 1111 = 15
    unsigned int bitwiseShiftRight = a2 >> 2;
    printf("BITWISE >> %i \n", bitwiseShiftRight);

    // ====== 52 Cast and Size Of ===
    // - Conversion of data between different types can happen automatically ( implicit conversion) byt the language or explicitly by the programmer)
    // Whenever a floating point value is assigned to an integer variable the decimal portion of the number gets truncated
    // Integers to floating point do not truncate any data
    // It is best to cast and avoid implicit type conversion
    // Typecast operator is the second-highest precedence in C behind the unary minus and unary plus operators

    int castDouble = (int) 21.51;

    printf("Cast to int: %i \n", castDouble);

    // Size of operator - tells you how many bytes are occupied in memory
    // sizeof is a special keyword in C
    // It is evaluated at compile time and not a runtime unless a variable-length array is used in its argument
    // Argument can be a variable, array name, name of a basic data type, name of a derived data type, or an expression
    // Typically used when deciding how much memory we have to allocate, this allows of to dynamically allocate memory and not have to hardcode it

    printf("An int is: %lu bytes \n", sizeof castDouble);
    printf("An expression is: %lu bytes \n", sizeof 4 + 6);

    // * operator with no operands with represent a pointer

    // ======= 55 Operator Precedence ======
    // Operator precedence determines the grouping of terms in an expression and decides how na expression is evaluated
    // - Dictates the order of evaluation when two operators share n operand
    // - Certain operators have higher precedence than other
    // - For example the multiplication operator has a higher precedence than the addition operator

    // Can avoid all precedence if we enclose in parentheses to be sure

    // Associativity - if two operators have the same precedence then associativity is applied
    // If they share an operand it will be determined by the associativity




    /**
    Type           Symbol                              Associativity
    ----------------------------------------------------------------
    Postfix	       () [] -> . ++ - -	               Left to right
    Unary	        + - ! ~ ++ - - (type)* & sizeof	   Right to left
    Multiplicative	* / %	                           Left to right
    Additive	    + -                                Left to right
    Shift	        << >>	                           Left to right
    Relational	    < <= > >=	                       Left to right
    Equality	    == !=	                           Left to right
    Bitwise AND	    &	                               Left to right
    Bitwise XOR	    ^	                               Left to right
    Bitwise OR	    |	                               Left to right
    Logical AND     &&	                               Left to right
    Logical OR	    ||	                               Left to right
    Conditional    	?:	                               Right to left
    Assignment	    = += -= *= /= %=>>= <<= &= ^= |=   Right to left
    Comma	       ,	                               Left to right
    */


    return 0;
}
