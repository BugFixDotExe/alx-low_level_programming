#include "main.h"

/**
 * string_nconcat - a function that concatinates two strings
 * @s1: first string
 * @s2: second string
 * @n: the first n bytes of s2
 * Return: a pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	else if (s1 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0'; i++)
		;
	for (j = 0; *(s2 + j) != '\0'; j++)
		;
	str = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		*(str + i) = *(s1 + i);
	}
	if (n >= j)
	{
		for (j = 0; j < n; j++)
		{
			*(str + i) = *(s2 + j);
			i++;
		}
		*(str + i) = '\0';
	}
	else if (n < j)
	{
		for (j = 0; j < n; j++)
		{
			*(str + i)  = *(s2 + j);
			i++;
		}
		*(str + i) = '\0';
	}
	return (str);

}

