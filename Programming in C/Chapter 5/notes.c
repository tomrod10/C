#include <stdio.h>

/*
[The for Statement]

Relation Operators (i.e > or <=) have lower precedence
compared to Arithmetic Operators
*/

// Printing without column width
int print_col_width()
{
    int i = 10, j = 20, k = 5;
    printf(" i      Range\n");
    printf("---     -----\n");
    printf("%i         %i\n", k, j);
    printf("%i         %i\n", i, j); // won't be centered properly

    printf("\n");
    printf(" i      Range\n");
    printf("---     -----\n");
    printf("%2i        %i\n", k, j); // centered with column width
    printf("%2i        %i\n", i, j);

    return 0;
};

int main()
{
    print_col_width();
    return 0;
};