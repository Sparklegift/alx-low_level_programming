#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: pointer to struct
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	else
	{
		if (d->name === NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
