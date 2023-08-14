#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 * @s: points to array of chars
 * Descripyion: does the job
 * Return: the length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}

/**
 * _strcpy - copies strings
 * @src: source string
 * @dest: destination
 * Description: does the job
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (src[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - create
 * @name: string
 * @age: float
 * @owner: string
 * Retun: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc((len1 + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc((len2 + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
