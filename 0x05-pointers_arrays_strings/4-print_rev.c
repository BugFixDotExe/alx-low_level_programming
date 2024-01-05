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

	str_len = -1;

	if (s == NULL)
		return;


	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	while (*s)
	{
		str_len++;
		s++;
	}
	s--;

	while (str_len >= 0)
	{
		_putchar(*s);
		--s;
		--str_len;
	}
	_putchar('\n');
}

