#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * return 0;
 */

int main(void)
{
    char a;
    a = 'a';

    while (a <= 'z')
    {
        putchar(a);
        a++;
    }

    putchar('\n');
    return 0;
}
