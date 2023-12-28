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
			if ((i * j) > 9)
			{
				double_digit(mul);
			}
			else
				_putchar('0' + mul);
			if (j <= 8)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
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
}
