#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in an array
 *  of integers using the Linear search algorithm
 * @array: a non-void pointer to the array
 * @size: the size to the non-void array
 * @value: the value to be found in the array
 * Return: The index of the found value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
