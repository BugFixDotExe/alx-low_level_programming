#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i, first_n, second_n, next_n;
	
	first_n = 1;
	second_n = 2;
	next_n = second_n

	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", next_n);
		first_n = second_n;
		second_n = next_n;
		next_n = first_n + second_n;
	}
	_putchar('\n');
	return (0);
}

