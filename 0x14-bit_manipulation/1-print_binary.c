#include "main.h"
/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: the number to be turned into a binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	char bin;

	if (n > 1)
		print_binary(n >> 1);
	bin = (n & 1) + '0';
	_putchar(bin);
}
