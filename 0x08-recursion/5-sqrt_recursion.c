#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number recursively
 * @n: integer
 * @cg: closest guesss
 *
 * Return: the natural square root of n or -1 if it doesn't exist
 */
int find_sqrt(int n, int cg)
{
	int next;

	if (n == 0 || n == 1)
		return (n);
	if (n == cg * cg)
		return (cg);
	next = (cg + n / cg) / 2;
	if (next != cg)
		return (find_sqrt(n, next));
	return (-1);
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: integer
 *
 * Return: natural square root of n; or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 2));
}
