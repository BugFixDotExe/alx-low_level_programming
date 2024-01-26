#include "main.h"

/**
 * _realloc - a function that reallocates a block of memory.
 * @ptr: a pointer to the pervious memory.
 * @old_size: old size of ptr.
 * @new_size: the new size.
 * Return: a pointer to new memory with ptr content.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_mem;
	unsigned int i;

	if (ptr == NULL)
	{
		new_mem = malloc(new_size);
		return (new_mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
			*((char *)new_mem + i) = *((char *)ptr + i);
		free(ptr);
		return (new_mem);
	}

	else if (new_size < old_size)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);
		else if (new_mem != NULL)
		{
			for (i = 0; i < new_size; i++)
				*((char *)new_mem + i) = *((char *)ptr + i);
		}
	}

	else if (new_size > 0 && ptr == NULL)
	{
		new_mem = malloc(new_size);
		if (new_mem == NULL)
			return (NULL);

	}
	free(ptr);
	return (new_mem);
}

