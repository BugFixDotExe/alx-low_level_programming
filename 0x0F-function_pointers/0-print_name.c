#include "function_pointers.h"


/**
 * print_name - a function that prints a name
 * @name: the string to be passed in for printing
 * @f: a pointer to the function to take the str
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;
	f(name);
	
}
