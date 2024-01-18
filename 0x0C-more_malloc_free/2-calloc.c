#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmeb: number of elements
 * @size: the number of bytes for each element in the arr
 * Return: void.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0)
		return (NULL);

	mem = malloc (size * nmemb);
	if (mem == NULL)
		return (NULL);
	return (mem);
}

