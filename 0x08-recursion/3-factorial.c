#include "main.h"

/**
 * factorial - a function that computes !n
 * @n: the n!
 * Return: the n!
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
