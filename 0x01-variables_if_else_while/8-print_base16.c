#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John 
 * Program: WinMingle Community C Training
 * Description: Print all the numbers of base 16 in lowercase.
 */

int main(void) {
    int i;
    char ch;
    for (i=0; i<10; i++)
    {
        putchar(i + '0');
    }
    for (ch='a'; ch<='f'; ch++)
    {
        putchar(ch);
    }
    putchar('\n');

    return (0);
}

