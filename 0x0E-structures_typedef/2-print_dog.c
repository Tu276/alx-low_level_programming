#include "dog.h"
#include <stdio.h>
/*file: 2-print_dog.c*/
/**
 * print_dog - prints a struct dog.
 * @d: struct dog.
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
