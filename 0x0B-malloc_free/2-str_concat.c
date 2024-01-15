#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: a pointer to the concatinated s1 &s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len_s1, len_s2;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}

	for (len_s1 = 0; *(s1 + len_s1) != '\0'; len_s1++)
		;
	for (len_s2 = 0; *(s2 + len_s2) != '\0'; len_s2++)
		;
	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		*(concat + i) = *(s1 + i);
	for (j = 0; j < len_s2; j++)
	{
		*(concat + i) = *(s2 + j);
		i++;
	}
	*(concat + i) = '\0';
	return (concat);
}

