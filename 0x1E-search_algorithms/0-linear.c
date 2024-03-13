/**
 * linear_search - a function that searches for a value in an array of ints
 *
 * Description: Every time you compare a value in the array to the value you
 * are searching, you have to print this value 
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return:  the first index where value is located
 * If value is not present in array or if array is NULL, return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		print("Value checked array[%d] = [%d]", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);

}
