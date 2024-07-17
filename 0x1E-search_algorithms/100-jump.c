#include "search_algos.h"
#include <math.h>
/**
 * jump_search - a function that searches for a value
 * in a sorted array of integers using the Jump search algorithm
 * @array: a non-void array that contains int values
 * @size: a size_t type representing the size of the array
 * @value: the value to searched for
 * Return: the index that contains the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lower_bound, higher_bound, index, step_by;

	lower_bound = 0;
	higher_bound = (size - 1);
	step_by = sqrt(size);

	if (array == NULL)
		return (-1);
	for (index = 0; index < step_by; index++)
	{
		if (value < array[step_by])
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			higher_bound = step_by - 1;
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", index, array[index]);
			lower_bound = step_by + 1;
		}
	}
	for (index = lower_bound; index <= higher_bound; index++)
	{
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
