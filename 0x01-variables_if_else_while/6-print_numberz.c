#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: print numbers using putchar
 */

int main(void) {
    int i;
    for (i=0; i<10; i++)
    {
        putchar(i + '0');
    }
    putchar('\n');
    return (0);
}

