#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each memeber of the array
 * @array: the array
 * @size: the size of the array
 * @action: a pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	/*account for size being 0*/
	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}

}
