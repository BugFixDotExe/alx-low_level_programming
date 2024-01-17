#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: the destination str
 * @src: the src string
 * @n: the number of bytes to be copied
 * Return: a string to the new str
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++)
		;
	if (n > j)
		n = j;

	for (j = 0; j < n; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	return (dest);
}
