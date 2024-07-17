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
	size_t mid;

	lower_bound = 0;
	higher_bound = size - 1;

	if (array == NULL)
		return (-1);

	while (lower_bound <= higher_bound && value >= array[lower_bound] && value <= array[higher_bound])
	{
		/* Prevent division by zero */
		if (array[higher_bound] == array[lower_bound])
		{
			if (array[lower_bound] == value)
				return lower_bound;
			else
				break;
		}
		mid = lower_bound + ((higher_bound - lower_bound) * (value - array[lower_bound])) / (array[higher_bound] - array[lower_bound]);
		/*ensure mid within the bound of size*/
		if (mid >= size)
			break;

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (value == array[mid])
		{
			printf("Found %d at index: %ld\n", value, mid);
			return (mid);
		}
		if (value < array[mid])
			higher_bound = mid - 1;
		else
			lower_bound = mid + 1;
	}
	return (-1);
}
