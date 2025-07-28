#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	char *new_str;
	int i, len = strlen(str) + 1;

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		new_str[i] = str[i];
	new_str[len] = '\0';

	return (new_str);
	free(new_str);
}
