#include <stdio.h>

#define ll long long

/**
 * main - a program that prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: always 0
 */
int main(void)
{
  ll prev_1 = 0;
	ll prev_2 = 1;
	int i;
  ll sum;

	for (i = 0; i < 50; i++)
	{
    sum = prev_1 + prev_2;
    printf("%llu\n", sum);
    prev_1 = prev_2;
    prev_2 = sum;
	}
	return (0);
}
