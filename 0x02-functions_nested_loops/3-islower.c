#include "main.h"


/**
 * _islower - a function that checks for lowercase character.
 * @c: the character to be checked.
 * Return: 1 ifislower and 0 ifnotlower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

