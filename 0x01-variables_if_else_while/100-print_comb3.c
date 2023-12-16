#include <stdio.h>

/**
 * main - the entry point
 * Return: zero
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 100; digit++)
	{
		if (digit % 10 == 0)
			continue;

		putchar('0' + digit / 10);
		putchar('0' + digit % 10);

		if (digit != 99)
		{
			putchar(' ');
			putchar(',');
		}
	}

	putchar('\n');
	return (0);
}
