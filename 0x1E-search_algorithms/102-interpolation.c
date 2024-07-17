#include "search_algos.h"

/**
 * interpolation_search - a function that searches
 * for a value in a sorted array of integers using
 * the Interpolation search algorithm
 * @array: a non-void array containing int values
 * @size: the size of the array of type size_t
 * @value: the value to searched for
 * Return: return the index of value in the array or -1 if non
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lower_bound, higher_bound;
	int mid;

	lower_bound = 0;
	higher_bound = size - 1;

	if (array == NULL)
		return (-1);
	while (lower_bound <= higher_bound && value >= array[lower_bound] && value <= array[higher_bound])
	{
		mid = lower_bound + (
				higher_bound - lower_bound) * ((
						value - array[lower_bound]) / (
							array[higher_bound] - array[lower_bound]));
		if (value == array[mid])
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			return (mid);
		}
		if (value < array[mid])
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			higher_bound = mid - 1;
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
			lower_bound = mid + 1;
		}
	}
	return (-1);
}
