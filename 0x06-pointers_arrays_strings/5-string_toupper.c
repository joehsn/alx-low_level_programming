#include "main.h"

/**
 * string_toupper - a function that reverses
 * the content of an array of integers
 *
 * @s: a param
 *
 * Return: a string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}

