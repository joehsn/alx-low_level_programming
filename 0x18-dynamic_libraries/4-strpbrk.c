#include "main.h"
#include <string.h>

/**
 * _strpbrk - a function that searches a string
 * for any of a set of bytes
 *
 * @s: a param
 *
 * @accept: a param
 *
 * Return: a string
 *
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
