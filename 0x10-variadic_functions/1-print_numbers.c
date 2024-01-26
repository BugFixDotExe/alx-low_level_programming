#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: the str separator
 * @n: the len of varaidic list
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (n == 0)
		printf("\n");
		return;
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		if (i < (n - 1))
			printf("%d%s",  va_arg(args, int), separator);
		else
			printf("%d", va_arg(args, int));
	}
	printf("\n");

}
