#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: area to fill into.
 * @b: constant byte.
 * @n: number of bytes.
 * Return: a pointer of type char.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (s == NULL || n <= 0)
		return (s);
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

