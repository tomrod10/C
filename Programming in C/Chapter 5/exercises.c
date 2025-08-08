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

int main()
{
    table();
    get_triangular();
    first_ten_factorials();
    return 0;
}
