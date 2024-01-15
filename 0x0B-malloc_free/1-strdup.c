#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memeory, which contains a copy of str
 * @str: the string to be copied over
 * Return: a pointer to the newly allocated space including the str
 */

char *_strdup(char *str)
{
	char *str_dup;
	int i, j;

	if (str == NULL)
		return (NULL);

	/* for getting the len fo the string */
	/* this will be used to allocated memory and copy over */
	for (i = 0; *(str + i) != '\0'; i++)
		;
	/* memory allocation and check*/
	str_dup = malloc(sizeof(char) * (i + 1));
	if (str_dup == NULL)
		return (NULL);

	/*copy of char from str into str_dup */
	for (j = 0; j < i; j++)
	{
		*(str_dup + j) = *(str + j);
	}
	*(str_dup + j) = '\0';
	return (str_dup);
}

