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
	int str_len, index_start;
	char temp;

	if (s == NULL)
		return;
	str_len = sizeof(s);

	if (str_len <= 1)
	{
		putchar('\n');
		return;
	}
	index_start = 0;

	while (str_len >= 0)
	{
		temp = s[index_start];
		s[index_start] = s[str_len];
		s[str_len] = temp;
		--str_len;
		index_start++;
	}
}

