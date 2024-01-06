#include "main.h"
#include <stddef.h>
/**
 * puts2 - function to print every other string
 * @str: the string to be printed
 * Return: Void
 */

void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}
	_putchar('\n');
}

