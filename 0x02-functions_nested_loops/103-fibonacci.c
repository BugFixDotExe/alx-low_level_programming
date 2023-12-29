#include <stdio.h>



/**
 * main - the entry
 * Return: None
 */

int main(void)
{
	long i, first_n, second_n, next_n, sum_of_even;

	first_n = 0;
	sum_of_even = 0;
	second_n = 1;
	next_n = second_n;
	for (i = 0; i < 50; i++)
	{
		first_n = second_n;
		second_n = next_n;
		next_n = first_n + second_n;
		if (next_n < 4000000)
		{
			if (next_n % 2 == 0)
			{
				sum_of_even += next_n;
			}
		}
	}
	printf("%lu", sum_of_even);
	printf("\n");
	return (0);
}
