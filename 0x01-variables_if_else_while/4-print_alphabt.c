#include <stdio.h>
/**
 * main - entry point
 * Return: zero
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'q' || letter == 'e')
			continue;
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
