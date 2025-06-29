#include "main.h"
#include <stdlib.h>

/**
* main - a function that convert a string to an integer.
*
* @s: a string
*
* Return: an int
*/
int _atoi(char *s)
{
  char *nptr;
  char sign = '+';
  int n;

  while (*s != '\0')
  {
    if (*s == '-' || *s == '+')
    {
      if (*s == sign)
        sign = '+';
      else
        sign = '-';
    }

    if (*s > 47 && *s < 58)
    {
      nptr = s;
      break;
    }
    
    s++;
  }

  n = strtol(nptr, NULL, 10);

  if (sign == '-')
    n = -n;

  return (n);
}
