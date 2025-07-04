#include "main.h"

/**
 * rot13 - a function that encode a sequence of words
 *
 * @str: a param
 *
 * Return: a coded
 */

char *rot13(char *str)
{
	const char *ALPHAs = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
	      *aphas = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (!(str[i] == ALPHAs[j]))
				continue;
			str[i] = aphas[j];
		}
	}

	return (str);
}
