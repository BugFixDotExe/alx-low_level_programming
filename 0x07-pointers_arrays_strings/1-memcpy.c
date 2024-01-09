#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: final destination of copied memory
 * @src: location to copy from
 * @n: the number of bytes to copy
 * Return: a pointer to new memory of type char
 * FYI: memcpy copies data not freaking memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int  i;

	if (dest == NULL || src == NULL)
		return (dest);
	if (n <= 0)
		return (dest);
	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

