#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: the destination string.
 * @src: the origin string.
 * @n: the number of bytes to copy.
 * Return: a pointer the new dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	if (n == 0)
		return (dest);
	for (i = 0; *(src + i) != '\0'; i++)
		;
	if (i == 0)
		return (dest);
	if (n > i)
	{

		for (i = 0; i < n && *(src + i) != '\0'; i++)
		{
			*(dest + i) = *(src + i);
		}
		*(dest + i) = '\0';
	}
	if (n < i)
	{
		for (i = 0; i < n; i++)
		{
			*(dest + i) = *(src + i);
		}
	}
	if (i < n)
	{
		for (j = 0; j < n; j++)
		{
			if (j < i)
				*(dest + j) = *(src + j);
			*(dest + j) = '\0';
		}
	}
	return (dest);
}

