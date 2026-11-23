#include<stdio.h>
#include<stdlib.h>

 /**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Printing lowercase alphabet in reverse order.
 */

int main(void) {
    char x;
    for (x='z'; x>='a'; x--)
    {
        putchar(x);
    }

    putchar('\n');
    return (0);
}
