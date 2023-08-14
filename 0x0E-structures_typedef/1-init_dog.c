#include "dog.h"

/**
 * init_dog - initilize struct function
 * @d: struct dog type
 * @name: string
 * @age: float
 * @owner: dog's owner
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
}
