#include "main.h"


/**
 * _islower - a function that checks for lowercase character.
 * Return: 1 ifislower and 0 ifnotlower
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z' )
		return (0);
	else
		return (1);
}

