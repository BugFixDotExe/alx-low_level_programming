#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @a: the digit to be messed with.
 * Return: the last digit;type:int.
 */

int print_last_digit(int a)
{
	int ls_d;

	if (a < 0)
	{
		ls_d = ((a * -1) % 10);
		_putchar('0' + ls_d);
		return (ls_d);
	}
	else
	{
		ls_d = a % 10;
		_putchar('0' + ls_d);
		return (ls_d);
	}
}

