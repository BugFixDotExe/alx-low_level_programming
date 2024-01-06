#include "main.h"
#include <stddef.h>

/**
 * puts_half - a function that prints half of a string
 * @str: the string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int len_of_str, i;
	char *ptr;

	if (str == NULL)
	{
		_putchar('\n');
		return;
	}
	ptr = &str[0];
	len_of_str = 0;

	while (*ptr)
	{
		len_of_str++;
		ptr++;
	}

	if (len_of_str % 2 == 0)
	{
		for (i = ((len_of_str - 1) / 2); *(str + i) != '\0'; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		int j;

		for (j = (len_of_str - 1) / 2; *(str + j) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}

