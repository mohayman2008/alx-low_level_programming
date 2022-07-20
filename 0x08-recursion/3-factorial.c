#include "main.h"

/**
 * factorial - finds the factorial of a given number recursively
 * @n: 0 or a positive integer
 *
 * Return: factorial of n or -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
