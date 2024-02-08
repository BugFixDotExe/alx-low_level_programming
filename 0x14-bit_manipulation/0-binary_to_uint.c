#include <stdio.h>
#include "main.h"
/**
 * pow_base - a function that squares SON
 * @n: the int that has to converted
 * Return: the squared
 */

int pow_base(int n)
{
	int square;

	square = 1;
	while (n > 0)
	{
		square *= 2;
		n--;
	}
	return (square);
}



/**
  * binary_to_uint - a function that converts a binary
  * number to an unsigned int.
  * @b: the int that has to converted
  * Return: the binary of b
*/
unsigned int binary_to_uint(const char *b)
{
	int len, sum, i;

	sum = 0;
	i = 0;

	for (len = 0; *(b + len) != '\0'; len++)
		;
	len = len - 1;

	while (len >= 0)
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		if (*(b + i) == '1')
			sum += pow_base(len);
		i++;
		len--;
	}
	return (sum);
}
