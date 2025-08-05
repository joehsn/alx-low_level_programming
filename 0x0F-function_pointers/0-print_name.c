#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 *
 * @name: an array of characters.
 *
 * @f: a function which will be executed on every
 * element of the given array
 *
 * Return: a void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}

