#include <ctype>
#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 *
 * @c: param that'll be checked
 *
 * Return: 1 if c is upper 0 otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
