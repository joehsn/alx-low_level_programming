/**
 * _islower - checks if a character is lowercase
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

#include <ctype.h>
#include "main.h"

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
