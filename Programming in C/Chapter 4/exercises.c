#include <stdio.h>
#include <math.h>

// 1

// 4 - Write a program that converts temps from Fahrenheit to Celsius
float fahrenheit_to_celsius(float temp_f)
{
    float temp_c = (temp_f - 32) / 1.8;
    return temp_c;
};

// 5 - What do expect the output to be
int print_char()
{
    char c, d;
    c = 'd';
    d = c;
    printf("d = %c\n", d); // I expect the char d to print

    return 0;
};

// 6 - Write a program to evaluate a polynomial
int eval_polynomial()
{
    double x = 2.55;
    double res = 3 * pow(x, (double)3) - 5 * pow(x, (double)2) + 6;
    printf("3x^2 - 5x^2 + 6 = %f\n", res);

    return 0;
};

// 7 - Write a program that evaluates an expression and displays the
// results in exponential format

int eval_exponential()
{
    return 0;
}

int main()
{
    printf("27.0 fahrenheit to celsius = %f\n", fahrenheit_to_celsius(27.0));
    print_char();
    eval_polynomial();
};
