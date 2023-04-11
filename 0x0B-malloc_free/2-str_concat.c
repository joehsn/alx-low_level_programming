#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: a param
 *
 * @s2: a param
 *
 * Return: a string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	size_t len_s1;
	size_t len_s2;
	size_t i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concat = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		concat[i] = s1[i];
	for (i = 0; i < len_s2; i++)
		concat[len_s1 + i] = s2[i];
	concat[len_s1 + len_s2] = '\0';

	return (concat);
	free(concat);
}

