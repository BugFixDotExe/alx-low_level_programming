#include "main.h"

/**
 * more_numbers - a function that prints 0-14 10X.
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
				end(j);
			else if (j > 9)
			{
				start(j);
				end(j);
			}
		}
		_putchar('\n');
	}
}

/**
 * start - a function that splits the start of a double digit
 * @i: the int value
 * Return: void
 */
void start(int i)
{
	_putchar('0' + i / 10);
}

/**
 * end - a function that sp;its ar the end of a double digit
 * @i: the int value
 * Return: void
 */
void end(int i)
{
	_putchar('0' + i % 10);
}
