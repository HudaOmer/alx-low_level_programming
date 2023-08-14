#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints dog info
 * @d: dogs struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(dog_t));
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
