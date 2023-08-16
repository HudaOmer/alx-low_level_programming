#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - print array
 * @size: of array
 * @action: pointer to function
 * @array: of elements
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	while (size)
	{
		size--;
		action(*array);
		array++;
	}
}
