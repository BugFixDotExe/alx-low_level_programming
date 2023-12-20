#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @a: the digit to be messed with.
 * Return: the last digit;type:int.
 */

int print_last_digit(int a)
{
	if (a < 0)
		return ((a * -1) % 10);
	return (a % 10);
}
