#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 *
 * @c: a value which will be checked
 *
 * Return: 1 is c is digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

