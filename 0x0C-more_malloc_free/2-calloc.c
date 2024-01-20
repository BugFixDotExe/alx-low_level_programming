#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmeb: number of elements
 * @size: the number of bytes for each element in the arr
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc (size * nmemb);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size / sizeof(unsigned int); i++)
		*(mem + i) = 0;
	return (mem);
}

