#include "main.h"

/**
 * times_table - a function that prints the time table
 * Return: void
 */

void times_table(void)
{
	int i, j, mul;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			mul = i * j;
			if (mul <= 9)
				single_digit(mul);
			else if (mul > 9)
				double_digit(mul);
		}
		_putchar('\n');
	}
}

/**
 * single_digit - fun to print single digit
 * @input: an integer val
 * Return: void
 */

void single_digit(int input)
{
	if (input < 5)
	{
		_putchar('0' + input);
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
	}
	else
	{
		_putchar('0' + input);
		_putchar(',');
		_putchar(' ');
	}
}


/**
 * double_digit - a function that gets the start and end
 * of a digit
 * @input: an integer of type int
 * Return: void
 */
void double_digit(int input)
{
	_putchar('0' + input / 10);
	_putchar('0' + input % 10);
	_putchar(',');
	_putchar(' ');
}
