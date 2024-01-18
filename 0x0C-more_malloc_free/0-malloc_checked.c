#include "main.h"
#include <limits.h>
/**
 * malloc_checked - a function that acclocates memory
 * @b: size of memory
 * Return: Void
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	if (b > 0 && b != INT_MAX)
		mem = malloc(b);
	else
		exit(98);
	return (mem);
}

