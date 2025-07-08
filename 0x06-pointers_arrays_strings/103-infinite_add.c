#include "main.h"

/**
 * _strlen - returns the length of s
 *
 * @s: string
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;
	return (x);
}

/**
 * _add - loops the operands and adds the two operands
 *
 *  @g: integer
 *  @x: integer
 *  @y: integer
 *  @n1: string
 *  @n2: string
 *  @r: string
 *  @l: integer
 *
 *  Return: void
 */
int _add(int g, int x, int y, char *n1, char *n2, char *r, int size_r)
{
	int z, f, s, l;

	for (z = g - 1; z >= 0; z--)
	{
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

	if (l == 1)
	{
		r[g + 1] = '\0';
		if (g + 2 > size_r)
			return (0);
		while (g-- >= 0)
			r[g + 1] = r[g];
		r[0] = l + '0';
	}
  return (1);
}

/**
 * infinite_add - a function that adds two numbers (big a$$ numbers).
 *
 * @n1: first operand
 * @n2: second operand
 * @r: the buffer -- the result
 * @size_r: the length of the r
 *
 * Return: r the buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/**
	 * x, y and z are indices.
	 * g is the greatist number.
	 * f is the first operand.
	 * s is the second operand.
	 * l is the leftover after the division operation.
	 */
	int x, y, g, res;

	x = _strlen(n1);
	y = _strlen(n2);

	if (x > y)
		g = x;
	else
		g = y;
	if (g + 1 > size_r)
		return (0);
	r[g] = '\0';

	res = _add(g, x, y, n1, n2, r, size_r);

  if (res == 0)
    return (0);

	return (r);
}
