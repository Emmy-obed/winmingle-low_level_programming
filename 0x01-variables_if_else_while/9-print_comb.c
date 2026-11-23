#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print all possible combinations of single-digit numbers separated by commas and spaces.
 */

int main(void) {
    int i;
    for (i=0; i<=9; i++)
    {
        printf("%i", i);
    if (i!=9)
    {
        printf(",");
    }

    }
    printf("\n");

    return (0);
}
