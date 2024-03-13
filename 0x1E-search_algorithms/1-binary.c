#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the index where value is located
 * If value is not present in array or if array is NULL, your
 * function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = size / 2;

	while (i)
	{
		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			i = i + ( i / 2);
		else
			i = i - ( i / 2);
	}
}
