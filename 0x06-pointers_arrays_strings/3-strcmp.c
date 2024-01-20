#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: a 0 for success and !0 for failure
 */

int _strcmp(char *s1, char *s2)
{

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 < *s2)
			return (-13);
		else if (*s1 > *s2)
			return (13);
		s1++;
		s2++;
	}
	if (*s1 == '\0' && *s2 != '\0')
		return (-13);
	else if (*s1 != '\0' && *s2 == '\0')
		return (13);
	return (0);
}

