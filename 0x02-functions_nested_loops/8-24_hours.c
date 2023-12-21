#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 * Starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			putchar('0' + i / 10);
			putchar('0' + i % 10);
			putchar(':');
			putchar('0' + j / 10);
			putchar('0' + j % 10);
			putchar('\n');
		}
	}
}
