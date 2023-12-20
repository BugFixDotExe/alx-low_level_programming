#include "main.h"

/**
 * main - The gatekeeper to all C programs.
 * Return: Zero
 */

int main(void)
{
	int i;
	char *text = "_putchar";

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
