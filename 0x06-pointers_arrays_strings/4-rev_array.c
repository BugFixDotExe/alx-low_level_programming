#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: pointer to array
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int size, i, temp;

	size = n - 1;

	for (i = 0; i < size; i++)
	{
		if (i != size)
		{
			temp = *(a + i);
			*(a + i) = *(a + size);
			*(a + size) = temp;
			size--;
		}
		if (i == size)
			break;
	}
}

