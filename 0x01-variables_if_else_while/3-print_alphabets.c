#include <stdio.h>
#include <stdlib.h>

/**
 * @brief - prints alphabet in lowercase then uppercase
 *
 * return : 0
 *
 */

int main(void)
{
    int c = 'a';
    int C = 'A';

    while (c <= 'z')
    {
        putchar(c);
        c++;
    }
    while (C <= 'Z')
    {
        putchar(C);
        C++;
    }
    putchar('\n');

    return (0);
}