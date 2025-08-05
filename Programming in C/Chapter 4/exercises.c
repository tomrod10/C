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
    double numerator = 3.31 * pow(10, -8) * 2.01 * pow(10, -7);
    double denominator = 7.16 * pow(10, -6) + 2.01 * pow(10, -8);
    double res = numerator / denominator;
    printf("%d / %e = %e\n", numerator, denominator, res); // printed in scientific notation

    return 0;
};

// 8 - Write a program to find the next largest even multiple
// for the following values of i and j
int next_largest_value(int i, int j)
{
    int res = i + j - i % j;

    return res;
};

int main()
{
    printf("27.0 fahrenheit to celsius = %f\n", fahrenheit_to_celsius(27.0));
    print_char();
    eval_polynomial();
    eval_exponential();
    printf("Next largest value of 365 that is an even multiple of 7 = %i\n", next_largest_value(365, 7));
    printf("Next largest value of 12,258 that is an even multiple of 23 = %i\n", next_largest_value(12258, 23));
    printf("Next largest value of 996 that is an even multiple of 4 = %i\n", next_largest_value(996, 4));
};
