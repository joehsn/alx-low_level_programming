#include "main.h"

/**
 *
 *
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
  /**
   * x, y and z are indices.
   * g is the greatist number.
   * f is the first operand.
   * s is the second operand.
   * l is the leftover after the division operation.
   */
  int x = 0, y = 0, z, g, f, s, l;

  while (n1[x] != '\0')
    x++;

  while (n2[y] != '\0')
    y++;

  if (x > y)
    g = x;
  else
    g = y;

  if (g + 1 > size_r)
    return (0);

  r[g] = '\0';

  for (z = g - 1; z >= 0; z--) {
    x--;
    y--;

    if (x >= 0)
      f = n1[x] - '0';
    else
      f = 0;

    if (y >= 0)
      s = n2[y] - '0';
    else
      s = 0;

    r[z] = ((f + s + l) % 10) + '0';
    l = (f + s + l) / 10;
  }

  if (l == 1) {
    r[g + 1] = '\0';

    if (g + 2 > size_r)
      return (0);

    while (g-- >= 0)
      r[g + 1] = r[g];

    r[0] = l + '0';
  }

  return (r);
}
