#include "3-calc.h"
#include <stdlib.h>

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
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL },
	};

	int i = 0;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}

