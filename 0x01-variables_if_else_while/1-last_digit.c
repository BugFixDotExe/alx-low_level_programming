#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - the entry point
 * Return: zero
 */
int main(void)
{
	int n;
	int mod_val;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	mod_val = n % 10;
	if (mod_val > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod_val);
	}
	else if (mod_val == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, mod_val);
	}
	else if (mod_val < 6 && mod_val != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod_val);
	}
	return (0);
}
