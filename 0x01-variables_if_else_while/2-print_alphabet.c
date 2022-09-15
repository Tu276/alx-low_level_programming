#include <stdio.h>
#include <stdlib.h>

/**
  * main - main
  * prints lowercase alphabet followed by a newline
  * Return: 0
  */

int main(void)
{
	for (char c = 'a'; c <= 'z'; ++c)

		putchar (c);
	putchar ('\n');

	return (0);
}
