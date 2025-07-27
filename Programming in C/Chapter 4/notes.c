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
                    // So... (8^1 x 5 + 8^0 x 5) ---> (40 + 0) equals 40 in decimal

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

    return 0;
}

/*
[Char Data Type]
*/
int char_type()
{
    char letter_g = 'g';
    char number_1 = '1';
    char newline = '\n';

    return 0;
};

int main(void)
{
    int_type();
    float_type();
    return 0;
}