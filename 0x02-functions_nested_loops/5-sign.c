#include "main.h"

/**
 * print_sign - a function that prints the sign of a number.
 * Return: 1 if n is > 0
 * 0 if n == 0
 * -1 if n < 0
 *  @n: the value to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

