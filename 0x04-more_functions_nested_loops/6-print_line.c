#include "main.h"

/**
 * print_line - a fun that draws a straight line.
 * @n: the int
 * Return: void.
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');

	else if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
