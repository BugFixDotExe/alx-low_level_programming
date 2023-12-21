#include "main.h"
/**
 * print_to_98 - a function that prints all natural number up till 98
 * @n: the argument to be handled.
 * Return: void
 */

void print_to_98(int n)
{

	if (n == 98)
		printf("%d\n", n);
	if (n == 0 || n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			++n;
		}
		printf("\n");
	}

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
			--n;
		}
		printf("\n");
	}
}
