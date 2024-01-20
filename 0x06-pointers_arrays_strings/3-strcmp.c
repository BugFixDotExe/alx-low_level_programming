#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: a 0 for success and !0 for failure
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;
	int min;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;

	if (*(s1 + 0) == '\0' && j > 0)
		return (15);
	if (i > 0 && *(s2 + 0) == '\0')
		return (15);
	if (*(s1 + 0) == '\0' && *(s2 + 0) == '\0')
		return (0);

	if (i > 0 && j > 0)
	{
		if (i < j)
			min = i;
		else
			min = j;
		for (i = 0; i < min; i++)
		{
			if (*(s1 + i) == *(s2 + i))
				continue;
			if (*(s1 + i) < *(s2 + i))
				return (-15);
			if (*(s1 + i) > *(s2 + i))
				return (15);
		}
	}
	return (0);
}

