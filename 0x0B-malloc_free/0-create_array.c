#include "main.h"

/**
 * create_array - a function that creates an array of char.
 * @size: size of the array.
 * @c: characters to be initialized into the array.
 * Return: a pointer to the new array.
 */

char *create_array(unsigned int size, char c)
{
	char *str_arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str_arr = malloc(size * sizeof(char));
	if (str_arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		*(str_arr + i) = c;
	}
	return (str_arr);
}

