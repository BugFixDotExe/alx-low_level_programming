#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int i;
	int sum;

	sum = 1;

	for (i = 0; i <= 50; i++)
	{
		sum += i;
		if (i < 50)
			printf("%d, ", sum);
		else
			printf("%d\n", sum);
	}
	return (0);
}

