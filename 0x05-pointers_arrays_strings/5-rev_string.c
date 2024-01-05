#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * rev_string - a function that reverses a string.
 * @s: a pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int str_len;

	str_len = 0;
	if (s == NULL)
		return;
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	while (*s)
	{
		str_len++;
		s++;
	}
	while (str_len >= 0)
	{
		putchar(*s);
		--s;
		--str_len;
	}
	putchar('\n');
}

