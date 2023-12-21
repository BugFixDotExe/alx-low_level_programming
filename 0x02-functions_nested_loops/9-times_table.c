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
			mul = j * i;
			_putchar('0' + mul / 10);
			_putchar('0' + mul % 10);

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}
}

