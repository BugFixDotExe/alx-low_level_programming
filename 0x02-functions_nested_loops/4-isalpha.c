#include "main.h"


/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: this is the letter to be checked.
 * Return: 1 if found and 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

