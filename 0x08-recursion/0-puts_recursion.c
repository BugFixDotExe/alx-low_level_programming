#include "main.h"

/**
 * _puts_recuursion - a function that prints a string, followed by a new line.
 * @s: the string to be printed.
 * Return: void.
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s == NULL || *s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*(s + i));
		i += 1;
	}
	_puts_recursion(s + i);
}

