#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * prints lowercase alphabet followed by a newline
 * Return: 0
 */

int main(void)
{
	int c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
