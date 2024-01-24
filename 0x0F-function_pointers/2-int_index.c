#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: a pointer to the array
 * @size: the size of the array
 * @cmp: a pointer to the function
 * Return: return an index of the value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, is;

	if (array == NULL || size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		is = cmp(*(array + i));
		if (is > 0)
			return (i);
	}
	return (-1);
}
