#include "search_algos.h"

/**
 * binary_search - a function that searches for a value
 * in a sorted array of integers using the Binary search algorithm
 * @array: a non-void array of integer elements
 * @size: a non-void size of the array
 * @value: a non-void value of type int, acting as the search value
 * Return: the position of the value in the array or a -1 indicating no success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, MID;
	size_t lower_bound = 0;
	size_t higher_bound = (size - 1);

	if (array == NULL)
		return (-1);
	while (lower_bound <= higher_bound)
	{
		printf("Serching in array: ");
		for (index = lower_bound; index <= higher_bound; index++)
			if (index == higher_bound)
				printf("%d", array[index]);
			else
				printf("%d, ", array[index]);
		printf("\n");
		MID = (lower_bound + higher_bound) / 2;
		if (array[MID] == value)
		{
			return (MID);
		}
		else if (array[MID] > value)
			higher_bound = MID - 1;
		else
			lower_bound = MID + 1;
	}
	return (-1);
}
