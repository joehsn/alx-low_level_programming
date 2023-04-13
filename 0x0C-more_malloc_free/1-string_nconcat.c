#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: a param
 *
 * @s2: a param
 *
 * @n: a param
 *
 * Return: a string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(new_str, s1);
	if (s2 != NULL)
		strncpy(new_str + len1, s2, n);

	new_str[len1 + n] = '\0';

	return (new_str);
	free(new_str);
}
