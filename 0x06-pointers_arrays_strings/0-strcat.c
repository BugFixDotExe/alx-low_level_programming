#include "main.h"


/**
 * _strcat - a function that concatenates two strings.
 * @dest: the destination.
 * @src: the source of the string to be copied.
 * Return: a pointer to the new string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; i++)
		;
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

