#include "main.h"

/**
  *print_alphabet - main
  *prints the alphabet in lowercse
  *
  *return: 0 if okay
  */

void  print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
