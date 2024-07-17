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
#include <stdio.h>
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
	size_t lower_bound, higher_bound, index, step_by;

	if (array == NULL)
		return (-1);

	lower_bound = 0;
	step_by = sqrt(size);
	higher_bound = step_by;

	while (higher_bound < size && array[higher_bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", lower_bound, array[lower_bound]);
		lower_bound = higher_bound;
		higher_bound += step_by;
	}
	printf("Value checked array[%ld] = [%d]\n", lower_bound, array[lower_bound]);
	printf("Value found between indexes [%ld] and [%ld]\n",
			lower_bound, higher_bound);
	if (higher_bound > size - 1)
		higher_bound = size - 1;

	for (index = lower_bound; index <= higher_bound; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}

