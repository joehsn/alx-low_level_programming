#include "3-calc.h"

/**
 * get_op_func - a function that returns a funtion
 * depending on the operator
 *
 * @s: an array of characters
 *
 * Return: a funtion or NULL
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
		{NULL, NULL}};

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i], s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}

