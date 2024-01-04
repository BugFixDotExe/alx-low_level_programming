#include "main.h"
#include <stddef.h>

/**
 * _puts - a function that writes str to stdout
 * @str: the string to be printed
 * Return: Void
 */

void _puts(char *str)
{
	if (str == NULL)
		return;
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

