#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encode a sequence of words
 *
 * @str: a param
 *
 * Return: a coded
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char cc = str[i];

		if (cc >= 'a' && cc <= 'z')
		{
			str[i] = (cc - 'a' + 13) % 26 + 'a';
		}
		else if (cc >= 'A' && cc <= 'Z')
		{
			str[i] = (cc - 'A' + 13) % 26 + 'A';
		}
	}

	return (str);
}
