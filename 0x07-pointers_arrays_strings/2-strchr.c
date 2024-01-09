#include "main.h"


/**
 * _strchr - a function that locates a character in a string.
 * @s: the complete string to perform a search on.
 * @c: the character to be found.
 * Return: a pointer to the first occurence of the c if found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (*(&s));
		s++;
	}
	return (NULL);
}

