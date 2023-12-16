#include <stdio.h>
/**
 * main - entry point
 * Return: zero
 */
int main(void)
{
	char letter;
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}

	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
