#include "main.h"
#include <stddef.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string to be counted
 * Return: A int of the number of chars that make up the string
 */

int _strlen(char *s)
{
	int char_count;

	if (s == NULL)
		return (0);
	for (char_count = 0; *(s + char_count) != '\0'; char_count++)
		;
	return (char_count);

}

