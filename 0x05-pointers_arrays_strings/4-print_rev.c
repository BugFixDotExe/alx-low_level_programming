#include "main.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_rev - a function that reverses a string
 * @s: the string to be reversed
 * Return: Void
 */

void print_rev(char *s)
{
	int str_len;
	

	if (s == NULL)
		return;
	
	str_len = 0;
	while (*s)
	{
		str_len += 1;
		s++;
	}
	while (str_len >= 0)
	{
		_putchar(*(s +str_len));
		str_len--;
	}
}

