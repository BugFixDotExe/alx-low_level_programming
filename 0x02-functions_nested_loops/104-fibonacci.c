#include <stdio.h>



/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long first_num, second_num, i, next_num;

	first_num = 0;
	second_num = 1;
	next_num = second_num;
	for (i = 0; i <= 98; i++)
	{
		printf("%lu", next_num);
		if (i <= 97)
			printf(", ");
		first_num = second_num;
		second_num = next_num;
		next_num = first_num + second_num;
	}
	printf("\n");
	return (0);
}

