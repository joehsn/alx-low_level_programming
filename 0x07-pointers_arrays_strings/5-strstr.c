#include "main.h"
#include <string.h>

/**
 *
 * _strstr - a function that locates a substring
 *
 * @haystack: a param
 *
 * @needle: a param
 *
 * Return: a string
 *
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
