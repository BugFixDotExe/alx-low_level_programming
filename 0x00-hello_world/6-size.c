
/**
 * main - entry point
 * Return: zero
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(void)
{
	if (sizeof(void *) == 4)
	{
		/* working with a 32bit Architecture*/
		printf("Size of a char: %zu byte(s)\n", sizeof(char));
		printf("Size of an int: %zu byte(s)\n", sizeof(int32_t));
		printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
		printf("Size of a float: %zu byte(s)", sizeof(float));
	}

	else if (sizeof(void *) == 8)
	{
		printf("Size of a char: %zu byte(s)\n", sizeof(char));
		printf("Size of an int: %zu byte(s)\n", sizeof(int));
		printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
		printf("Size of a float: %zu byte(s)", sizeof(float));
	i}
	return (0);
}
