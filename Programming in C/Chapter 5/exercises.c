#include <stdio.h>

/*
2 - Generate a table for n and n^2 with values from 1 to 10
*/

int table()
{
    printf("====[Exercise 2]====\n");
    printf(" n     n^2\n");
    printf("---   -----\n");
    for (int n = 1; n <= 10; n++)
        printf("%2i      %i\n", n, (n * n));

    return 0;
}

/*
3- Write a program that can get the triangular values
of every fifth element between 5 and 50
*/
int get_triangular()
{
    printf("====[Exercise 3]====\n");
    for (int n = 5; n <= 50; n++)
        if (n % 5 == 0)
            printf("%i\n", n * (n + 1) / 2);

    return 0;
};

/*
4- Write a program to get the first ten
factorials and print a table displaying them
*/

int first_ten_factorials()
{
    printf("====[Exercise 4]====\n");

    int n, m, fact;
    printf(" n       n!  \n");
    printf("---    ------\n");

    for (n = 1; n <= 10; n++)
    {
        fact = 1;
        for (m = n; m > 0; m--)
        {
            fact *= m;
        };
        printf("%2i        %i\n", n, fact);
    };

    return 0;
};

/*
5- Make the already written program in a more readable manner
*/
int two_to_the_nth(void)
{
    printf("====[Exercise 5]====\n");
    int n, two_to_the_n;

    printf("Table of Powers of Two\n");
    printf(" n     2 to the n\n");
    printf("---    ------------\n");

    two_to_the_n = 1;
    for (n = 0; n <= 10; n++)
    {
        printf("%2i        %i\n", n, two_to_the_n);
        two_to_the_n *= 2;
    }
    return 0;
};

/*
6- Add a negative sign in front of the number (field width) that's in
front of the printf data type formatter (format specifier)
*/

int table_2()
{
    printf("====[Exercise 6]====\n");
    printf(" n     n^2\n");
    printf("---   -----\n");
    for (int n = 1; n <= 10; n++)
        printf("%-2i      %i\n", n, (n * n));

    return 0;
};

/*
7- Adding a decimal point before the field width
in a print statement.
*/
int usd_formatter()
{
    int dollars, cents, count;

    for (count = 1; count <= 10; count++)
    {
        printf("Enter dollars: ");
        scanf("%i", &dollars);
        printf("Enter cents: ");
        scanf("%i", &cents);
        printf("$%i.%.2i\n\n", dollars, cents);
    }

    return 0;
};

/*
8- Rewrite triangular numbers function, but this time
do not cap user to enter 5 numbers per program invocation
*/
int get_triangular_v2()
{
    int n, number, triangularNumber;

    while (1)
    {
        printf("What triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = 0;
        for (n = 1; n <= number; n++)
        {
            triangularNumber += n;
        }
        printf("Triangular number %i is %i\n\n", number, triangularNumber);
    }
    return 0;
};

/*
9- Rewrite programs 5.2 and 5.5 with while loops instead
*/

int get_triangular_v3()
{
    int n, number, triangularNumber;
    printf("What triangular number do you want? ");
    scanf("%i", &number);

    n = 1;
    triangularNumber = 0;
    while (n <= number)
    {
        triangularNumber += n;
        n++;
    };

    printf("Triangular number %i is %i\n\n", number, triangularNumber);
}

int main()
{
    table();
    get_triangular();
    first_ten_factorials();
    two_to_the_nth();
    table_2();
    // usd_formatter();
    // get_triangular_v2();
    get_triangular_v3();
    return 0;
};
