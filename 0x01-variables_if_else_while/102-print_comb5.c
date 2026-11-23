#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print all possible combinations of two two-digit numbers.
 */

int main(void) {
    int i, j;

    for (i=0; i<=99; i++)
    {
        for (j=0; j<=99; j++)
        {
            if (i<j)
            {
                putchar((i/10) +'0');
                putchar((i%10) +'0');
                putchar(' ');
                putchar((j/10) +'0');
                putchar((i%10) +'0');
           if (i!=98 || j!=99)
             { 
                putchar(',');
                putchar(' ');
             }
           }
        }
    }
    putchar('\n');

    return (0);
}
