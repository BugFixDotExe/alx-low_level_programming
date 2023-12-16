#include <stdio.h>

/**
 * main - entry point
 * Return: zero
 */

int main(void)
{
	char entry;

	for (entry = 'a'; entry <= 'z'; entry++)
	{
		putchar(entry);
	}

	for(entry = 'A'; entry <= 'Z'; entry++)
	{
		putchar(entry);
	}
	putchar('\n');
	return (0);
}
