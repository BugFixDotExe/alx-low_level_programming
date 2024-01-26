#include "variadic_functions.h"


/**
 * print_strings - a function that prints strings and  \n
 * @separator: a char separator
 * @n: the size of the varaidic list
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	if (n == 0)
		printf("\n");
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
		{
			if (i < (n - 1))
			{
				printf("(nil)%s", separator);
			}
			else if (i == (n - 1))
				printf("(nil)");
		}
		if (str != NULL && i < n)
		{
			if (i == (n - 1))
				printf("%s", str);
			else if (i < (n - 1))
				printf("%s%s", str, separator);
		}

	}
	printf("\n");
}

