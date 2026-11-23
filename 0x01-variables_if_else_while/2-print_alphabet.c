#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase, followed by a new line.
 */

int main(void) {
    char x = 'a';
    while (x<= 'z')
    {

        putchar(x);
        x++;
    }

    putchar('\n');
    return (0);
}
