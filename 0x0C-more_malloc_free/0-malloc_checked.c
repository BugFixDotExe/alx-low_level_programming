#include "main.h"

/**
 * malloc_checked - a function that acclocates memory
 * @b: size of memory
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b <= 0)
		exit (98);
	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}

