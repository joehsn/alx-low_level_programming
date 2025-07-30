#include "main.h"
#include <stdlib.h>

void free_res(char **res, int i);
int count_words(char *str, int nstr);

/**
 * strtow - a function that splits a string into words.
 *
 * @str: a string
 *
 * Return: a double-pointer
 */
char **strtow(char *str)
{
	char **res;
	int i, j, s, word;
	int str_len = 0, words_count = 0;

	if (str == NULL)
		return (NULL);

	while (str[str_len] != '\0')
		str_len++;

	words_count = count_words(str, str_len);

	res = malloc(sizeof(char *) * words_count);

	if (res == NULL || words_count == 0)
		return (NULL);

	for (i = s = 0; i < words_count; i++)
	{
		for (word = s; str[word] != '\0'; word++)
		{
			if (str[word] == ' ')
				s++;

			if (str[word] != ' ' && (str[word + 1] == ' ' || str[word + 1] == '\0'))
			{
				res[i] = malloc((word - s + 2) * sizeof(char));
				if (res[i] == NULL)
				{
					free_res(res, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; s <= word; s++, j++)
			res[i][j] = str[s];
		res[i][j] = '\0';
	}

	res[i] = NULL;
	return (res);
}

/**
 * count_words - a function that counts word within a string
 *
 * @str: a string
 * @nstr: the string length
 *
 * Return: the length
 */
int count_words(char *str, int nstr)
{
	int i, res = 0;

	if (str[0] != ' ')
		res++;

	for (i = 0; i < nstr - 1; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
			res++;
	}

	return (res);
}

/**
 * free_res - a function that frees the memory
 *
 * @res: the double-pointer
 * @i: the failed-to-allocate index
 *
 * Return: void
 */
void free_res(char **res, int i)
{
	if (res != NULL && i != 0)
	{
		while (i >= 0)
		{
			free(res[i]);
			i--;
		}
		free(res);
	}
}
