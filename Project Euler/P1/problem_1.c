/* 
[Multiples of 3 or 5]

If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int sum = 0;

int countMultiples(int num) {
    for (int i = 3; i < num; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        };
    };
    return sum;
};

int main() {
    int res = countMultiples(1000);
    printf("The result is: %d\n", res);
    return res;
};
