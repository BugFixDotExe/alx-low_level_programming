#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long i, first_n, second_n, next_n;

	first_n = 0;
	second_n = 1;
	next_n = second_n;
	for (i = 0; i < 50; i++)
	{
		printf("%lu", next_n);
		if (i < 49)
			printf(", ");
		first_n = second_n;
		second_n = next_n;
		next_n = first_n + second_n;
	}
	putchar('\n');
	return (0);
}

