#include<stdio.h>
#include<stdlib.h>

 /**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase, then uppercase, followed by a new line.
 */

int main(void) {
    char x = 'a';
    while (x<='z')
    {
        putchar(x);
        x++;
    }

    char ch = 'A';
    while (ch<='Z')
    {
        putchar(ch);
        ch++;
    }

    putchar('\n');
    return (0);
}

