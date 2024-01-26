#include "3-calc.h"

/**
 * get_op_func - a function, that based on what s is
 * calls the appropriate function
 * @s: the string to be passed
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	}
	i = 0;
	while (i < 6)
	{
		if (strcmp(s, ops[i]) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
}
