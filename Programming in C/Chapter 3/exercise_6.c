#include <stdio.h>

int main(void)
{
    int answer, result;

    answer = 100;
    result = answer - 10;
    // I expect the result to be 95 when printed to console
    printf("The result is %i\n", result + 5);

    return 0;
}