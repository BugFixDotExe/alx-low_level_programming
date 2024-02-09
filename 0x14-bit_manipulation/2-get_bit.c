#include "main.h"

/**
 * get_bit - a function that returns
 * the value of a bit at a given index.
 * @n: the binary number to be converted
 * @index: at what index to get the binary number
 * Return: the value at that index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, r;

	for (i = 0; n > 0; i++)
	{
		r = n % 2;
		if (i == index)
			return (r);
		n = n / 2;
	}
	return (-1);
}
