#include "main.h"

/**
 * a function that returns the length of a string.
 * @s: the string to be counted.
 * Return: the count of the characters that make up
 * the string.
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s == NULL || *s == '\0')
	{
		return(i);
	}
	else
		return (1);
	
	i += _strlen_recursion(s + 1);
}

