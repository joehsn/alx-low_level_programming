#include "main.h"


int palindrome_check(int b, int e, char *s);

/**
 * is_palindrome -  a function that returns 1 if a string
 * is a palindrome and 0 if not.
 *
 * @s: A string
 *
 * Return: An integer
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	return (palindrome_check(0, len, s));
}

/**
 * _strlen_recursion - a function that returns the length of a string
 *
 * @s: a param
 *
 * Return: intger
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len++;
	s++;

	return (len + _strlen_recursion(s));
}


/**
 * palindrome_check - a recursive function that checks if a string is
 * palindrome.
 *
 * @b: the starting index
 * @e: end index
 * @s: string
 *
 * Return: an integer
 */
int palindrome_check(int b, int e, char *s)
{
	if (b >= e)
		return (1);
	else if (s[b] != s[e])
		return (0);
	else
		return (palindrome_check(b + 1, e - 1, s));
}
