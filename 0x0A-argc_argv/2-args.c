#include "main.h"

/**
 * main - entry point
 * @argc: the number of args
 * @argv: an array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n",  *(argv + i));
		i++;
	}
	return (0);
}
