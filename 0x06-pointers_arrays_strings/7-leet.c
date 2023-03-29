#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 *
 * @s: a param
 *
 * Return: a string
 */

char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4300711";

	for (int i = 0; s[i] != '\0'; i++)
	{
		for (int j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j / 2];
				break;
			}
		}
	}
	return (s);
}

