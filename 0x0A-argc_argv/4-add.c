#include "main.h"

/**
 * main - entry point of the program
 * @argc: the number of args
 * @argv: an array of args
 * Return: 0 on success
 */

int main(int argc, char ** argv)
{
	int i, sum, converted_value;

	if ((argc - 1) == 0)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			converted_value = atoi(*(argv + i));
			if (converted_value != 0 || (converted_value == 0 && strcmp(*(argv + i), "0") == 0))
			{
				sum += converted_value;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
