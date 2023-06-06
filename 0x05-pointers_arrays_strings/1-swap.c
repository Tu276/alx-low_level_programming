#include "main.h"
/**
  * swap_int - swaps two ints
  * @a : pointer to int one
  * @b : ponter to int two
  */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

