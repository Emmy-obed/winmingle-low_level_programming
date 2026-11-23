#include<stdio.h>
#include<stdlib.h>

/**
 * Author: Obediah Emmanuel John
 * Program: WinMingle Community C Training
 * Description: Print the alphabet in lowercase except letters q and e, followed by a new line.
 */

int main(void) {
    char x;
    for (x='a'; x<='z'; x++)
    {
        if (x!='q' && x!='e')
        {
            putchar(x);
        }
    }
    putchar('\n');
    
    return (0);
}
