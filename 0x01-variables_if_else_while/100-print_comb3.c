#include <stdio.h>

/**
 * main - the entry point
 * Return: zero
 */

int main(void)
{
	int digit,dummy;

	dummy = 2;


	for (digit = 1; digit < 100; digit++)
	{
		if (digit % 10 == 0)
		{
			digit += dummy;
			dummy += 1;
		}

		if (dummy == 11)
			break;
		putchar('0' + digit / 10);
		putchar('0' + digit % 10);
		if (dummy < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
