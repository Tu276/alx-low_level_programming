#include "lists.h"
/*file: 0-print_list.c*/
/**
 * print_list - prints all element of a list_t list
 *
 * @h: singly linke list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		size++;
		h = h->next;
	}

	return (size);
}
