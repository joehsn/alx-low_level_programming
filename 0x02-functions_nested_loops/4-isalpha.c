/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Return: 1 if c is a letter (lowercase or uppercase), 0 otherwise
 */

#include <ctype.h>
#include "main.h"

int _isalpha(int c)
{
    if (isalpha(c))
        return 1;
    else
        return 0;
}
