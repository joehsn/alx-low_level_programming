#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: a param
 *
 * @b: a param
 *
 * @n: a pararm
 *
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
