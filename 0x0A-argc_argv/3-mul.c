#include "main.h"

/**
 * main - entry point
 * @argc: the size of argv
 * @argv: an array of argunments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int mul;

	if ((argc - 1) < 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(*(argv + 1)) * atoi(*(argv + 2));
	printf("%d\n", mul);
	return (0);
}

