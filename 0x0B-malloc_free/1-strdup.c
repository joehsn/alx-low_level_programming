#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of
 * the string given as a parameter.
 *
 * @str: a param
 *
 * Return: a string
 */

char *_strdup(char *str)
{
	char *new_str, *t = str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (*t++)
		len++;

	new_str = malloc((sizeof(char) * len) + 1);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];

	new_str[len + 1] = '\0';

	return (new_str);
	free(new_str);
}
