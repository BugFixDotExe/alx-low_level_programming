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
	int i;

	i = 0;
	if (min > max)
		return (NULL);
	range = malloc(sizeof(int) * (max - min + 1));
	if (range == NULL)
		return (NULL);
	while (min <= max)
	{
		*(range + i) = min;
		i++;
		min++;
	}	
	return (range);
}

