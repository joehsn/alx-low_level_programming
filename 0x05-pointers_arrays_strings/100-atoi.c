#include "main.h"

/**
* main - a function that convert a string to an integer.
*
* @s: a string
*
* Return: an int
*/
int _atoi(char *s)
{
  /* Explaination of this function is in README file */
  unsigned int num = 0;
  int sign = 1;

  /* Every piece of text ends with '\0' character, which indicates the end of the string. */
  /* So this is `while` loop won't stop until we hit the end of the text */
  while (*s != '\0')
  {
    if (*s == '-')
        /* Well, this abc of math, so there's no need for me to explain it */
        sign *= -1;

    /* this check the code of the character after de-refernce it
     * (getting the value at the address) against ASCII code
     * 0 being at 48 ... and 9 at 57 in the ASCII table.
     */
    if (*s > 47 && *s < 58)
    {
      /* here we update the value of `num` to 
       * (num * 10) which results in adding 0 to the right of the number the we add
       * (*s - '0') the difference of `s` code, after de-referencing it and the code of '0'.
       */
      num = (num * 10) + (*s - '0');
    }
    /* this clause won't run unless the previous clause is false */
    else if (num > 0)
      break;
    
    s++;
  }

  num *= sign;

  return (num);
}
