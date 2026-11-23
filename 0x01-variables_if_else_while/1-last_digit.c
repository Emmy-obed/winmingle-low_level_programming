#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * Author:Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Write a program that prints the last digit of a random number n.
 */

int main(void) {
    int n;
    int last;
    srand(time(0));
    
    n = rand();
    last = n % 10;

    if (last > 5)
        printf("last digit of %i is %i and is greather than 5\n", n, last);
    else if (last ==0)
        printf("last digit of %i is %i and is 0 \n", n, last);
    else if (last < 6)
        printf("last digit of %i is %i and is less than 6 not 0\n", n, last);
    return (0);
}
