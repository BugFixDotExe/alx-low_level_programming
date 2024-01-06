
#include "main.h"


/**
 * _strcpy - a function that copies str over to dest.
 * @dest: the grave of the str.
 * @src: sting to be copied over.
 * Return: a char pointer
 */

char *_strcpy(char *dest, char *src)
{
	int index;
	for (index = 0; *(src + index) != '\0'; index++)
	{
		*(dest + index) = *(src + index);
	}

	*(dest + index) = *(src + index);
	return (dest);
}
