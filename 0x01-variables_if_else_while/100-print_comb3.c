#include<stdio.h>
#include<stdlib.h>

 /**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print all possible different combinations of two digits.
 */

int main(void) {
    int i,j;
    
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
           if (i < j)
            {
                putchar(i+'0');
                putchar(j+'0');
           if (i!=8 || j!=9)
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
