/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a new line.
 */

#include "main.h"

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
