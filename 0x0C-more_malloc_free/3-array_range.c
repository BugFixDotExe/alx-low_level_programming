#include "main.h"

/**
 * array_range - a function creates an array of integers
 * @min: the start of the range
 * @max: the end of the range;
 * Return: a pointer to the array
 */
int *array_range(int min, int max)
{
	int *range;
	int i, j;

	j = 0;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * (max + 1));
	if (range == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(range + j) = i;
		j++;
	}
	return (range);
}

