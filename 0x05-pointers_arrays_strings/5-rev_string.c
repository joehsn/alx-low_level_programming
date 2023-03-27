#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string.
 *
 * @s: a param
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		char temp = s[i];

		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
