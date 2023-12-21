#include "main.h"

/**
 * _isdigit - a function that checks for a digit(0-9)
 * @c: the "digit" to check
 * Return: 1 cisDigit 0 cis!Digit 😏
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
