#include <stdio.h>
/**
 * main - entry point
 * Return: zero
 */
int main(void)
{
	int digit;
	for (digit = 0; digit < 10; digit++)
	{
		putchar(48 + digit);
	}
	putchar('\n');
	return (0);
}
