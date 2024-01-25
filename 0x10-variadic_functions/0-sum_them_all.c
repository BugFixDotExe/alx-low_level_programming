#include "variadic_functions.h"


/**
 * sum_them_all - a function that returns the sum of all it's parameters
 * @n: a constant of type unsigned int
 * Return: the sum of all the variable args
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	va_start(args, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	return (sum);

}
