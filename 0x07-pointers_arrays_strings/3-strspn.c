#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: a param
 *
 * @accept: a param
 *
 * Return: a string
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
