#include "main.h"

/**
 * string_toupper - a function to change str to UPPER
 * @s: the string
 * Return: a pointer to the modified string
 */

char *string_toupper(char *s)
{
	int i;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		*(s + i) = *(s + i) - 32;
	}
	return (s);
}

