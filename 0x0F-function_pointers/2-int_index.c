#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: of int
 * @size:  the number of elements in the array:
 * @cmp: pointer to function to be used to compare values
 * Return:  index of the first element, or -1 if not existed
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		if (cmp(array[count]))
			return (count);
	}
	return (-1);
}
