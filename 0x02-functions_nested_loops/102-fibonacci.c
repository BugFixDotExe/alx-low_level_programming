#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, j, first_n, second_n, next_n;

	first_n = 0;
	second_n = 1;
	next_n = second_n;
	for (j = 1; i <= 5; i++)
	{
		for (i = 0; i < 10; i++)
		{
			printf("%d, ", next_n);
			first_n = second_n;
			second_n = next_n;
			next_n = first_n + second_n;
		}
	}
	_putchar('\n');
	return (0);
}

