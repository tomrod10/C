#include <stdio.h>
#include <string.h>

char *SPACER = "====================";

/*
[Valid variable names]
- Start with letter or underscore (_)
- Followed by a-z, A-Z, 0-9
*/
int sum;
char pieceFlag;
int i;
float J5x7;
int Number_of_moves;
int _sysflag;

/*
[Basic Data Types]
*/
int laps = 3;
float width = 7.62;
double length = 5.1925738; // Roughly 2x the precision of float
char age = '6';            // Use of single-quotes

/*
[Int Data Type]
*/
int int_type()
{
    /* === Octal Form - Base 8 ===*/
    int temp_celsius = -12;
    int rhino_weight_lbs = 5100;

    // To express integers in this form it needs to be preceded by a 0 and have values [0-7]
    int forty = 40; // 050 = (5 x 8 + 0) Remember, right-to-left: 8^n + 8^2 + 8^1 + 8^0
                    // So... (8^1 x 5 + 8^0 x 0) ---> (40 + 0) equals 40 in decimal

    int hundred_twenty_seven = 127; // 0177 = (8^2 x 1 + 8^1 x 7 + 8^0 x 7) ---> (64 x 1 + 8 x 7 + 1 x 7) = 127

    printf("My uncle is %o years old in Octal form.\n", forty);
    printf("My uncle is %#o years old in Octal form with leading zero.\n", forty);
    printf("%s\n", SPACER);

    /*=== Hexadecimal Form - Base 16 ===*/

    // To express this form the integer needs to be preceded by 0x (x is case agnostic)
    // 0x is followed by digits [0-9] and letters [A-F] (again, case agnostic).
    // [A-F] represent the values 10-15

    int rgbColor = 0xFFEF0D;

    printf("Hex color w/o 0x: %x.\n", rgbColor);             // Display in hex format without 0x
    printf("Hex color w/o 0x Capitalized: %X.\n", rgbColor); // Display in hex format without 0x and letters capitalized
    printf("Hex color w 0x: %#x.\n", rgbColor);              // Display in hex format with 0x
    printf("Hex color w 0x Capitalized: %#X.\n", rgbColor);  // Display in hex format with 0x and letters capitalized

    return 0;
}

/*
[Float Number Type]

The range of float, double and long (type specifier) will vary
on the computer system you're on!
*/
int float_type()
{
    // Valid floating numbers
    float example_1 = 3.;
    float example_2 = 125.8;
    float example_3 = -.0001;
    printf("Examples of floating numbers: %f, %f, %f\n", example_1, example_2, example_3);

    // You can also express floating numbers in scientific notation
    float example_4 = 1.7e4; // 1.7 x 10^-4 = 0.00017
    printf("Floating number in scientific notation: %e\n", example_4);

    float short_pi = 3.14f; // explicitly express a float constant by appending f or F
    printf("%s\n", SPACER);

    return 0;
}

/*
[Char Data Type]
- Formed by a pair single quotes
*/
int char_type()
{
    char letter_g = 'g';
    char number_1 = '1';

    printf("Letter g as a char: %c\n", letter_g);
    printf("1 as a char: %c\n", number_1);
    printf("the newline symbol \\n counts as one char\n");
    printf("%s\n", SPACER);

    return 0;
};

/*
[Boolean Data Type]
- Also known as _Bool in C
- 0 = false, 1 = true
- <std.bool.h> defines true and false for convenience
*/
int bool_type()
{
    _Bool bool_false = 0;
    _Bool bool_true = 1;

    printf("false is: %i\n", bool_false);
    printf("true is: %i\n", bool_true);
    printf("%s\n", SPACER);
}

/*
[Type Specifier]
- long
- long long
- short
- unsigned
- signed

- Using type specified suffixes allows for precise control
  over how constant values are stored in memory and help prevent
  memory overflow.

- When declaring variables with these types specifiers the
  keyword int can be omitted.

- Smallest to biggest:
  short > int > unsigned > long
  > unsigned long > long long > unsigned long long
*/
int type_specifiers()
{
    long int big_number = 131071100L;                 // L or l at the end makes it constant value (4 - 8 bytes)
    long long bigger_number = 131071100000LL;         // At least 64 bits
    short int short_age = 22;                         // Not less than 2 bytes or 16 bits
    unsigned int basketballs = 10;                    // Only positive numbers including zero
    unsigned long big_big_number = 131071100000000UL; // You can combine suffixes

    printf("long int constant: %li\n", big_number);
    printf("long long: %lli\n", bigger_number);
    printf("short int: %hi\n", short_age);
    printf("unsigned int: %u\n", basketballs);

    return 0;
}

int arithmetic()
{
    float half = 0.5;
    int two = 2;
    float res1 = half * two;
    int res2 = half * two;

    printf("float %.1f times int %i = %f\n", half, two, res1);
    printf("float %.1f times int %i = %i\n", two, half, res2);

    return 0;
};

int main(void)
{
    int_type();
    float_type();
    char_type();
    bool_type();
    type_specifiers();
    arithmetic();
    return 0;
}