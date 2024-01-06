#include "main.h"
#include <stdio.h>


/**
 * print_array - a function that prints n elements of arr
 * @a: pointer to array
 * @n: size of array
 */
void print_array(int *a, int n)
{
	int i;

	if (n == 0)
		return;
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d, ", *(a + i));
		else if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
		}
	}

}
