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
	int len = (strlen(str) + 1);

	new_str = malloc(sizeof(char) * len);
	if (new_str == NULL)
		return (NULL);
	memcpy(new_str, str, len);
	return (new_str);
	free(new_str);
}
