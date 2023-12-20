#include "main.h"

/**
 * _abs -  a function that computes the absolute value of an integer.
 * @int: the int to be worked upon
 * Return: the absolute value of the int
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		return (a);
}
