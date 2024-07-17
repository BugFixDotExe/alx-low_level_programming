#include "search_algos.h"
/**
 * min - a function that return the min beween two ints
 * @a: an int first value
 * @b: an int second value
 * Return: the min of a and b
 */

int min(size_t a, size_t b)
{
	return (a < b ? a : b);
}

/**
 * binarySearch - an implementation of the binary search
 * @array: an array of integer elements
 * @l: an arg of type size_t representing the left index
 * @r: an arg of type size_t representing the right index
 * @x: the value to be found.
 * Return: the index of x or -1 if not found
 */
int binarySearch(int array[], size_t l, size_t r, int x)
{
	int MID;

	if (r >= l)
	{
		MID = l + (r - l) / 2;
		if (array[MID] == x)
			return (MID);
		if (array[MID] > x)
			return (binarySearch(array, l, MID - 1, x));
		return (binarySearch(array, MID + 1, r, x));
	}
	return (-1);
}

/**
 * exponential_search - a function that implements the exponenetial search
 * @array: a non-void array of integer elements
 * @size: the size of the array of type size_t
 * @value: the value to which we seek it's index
 * Return: an integer indicating the index of value
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 1;

	if (array == NULL)
		return (-1);
	if (array[0] == value)
		return (0);
	while (index < size && array[index] <= value)
		index = index * 2;
	return (binarySearch(array, index / 2, min(index, size), value));
}
