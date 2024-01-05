#include "main.h"
#include <stddef.h>


/**
 * print_rev - a function that reverses a string
 * @s: the string to be reversed
 * Return: Void
 */

void print_rev(char *s)
{
	int str_len;
	
	if (*s == '\0')
		_putchar(' ');
	if (s == NULL)
		return;

	for (str_len = 0; s[str_len] != '\0'; str_len++)
		;
	while (str_len >= 0)
	{
		_putchar(*(s +str_len));
		str_len--;
	}
}

