#include "main.h"

/**
 * check_if_prime - checks if a number is a prime number by checking
 *	if it's divisible by numbers starting with @d
 * @n: integer
 * @d: starting divisor have to be 2 for the first call on stack otherwise
 *	result may not be accurate
 *
 * Return: 1 if n is prime number or 0 elsewise
 */
int check_if_prime(int n, int d)
{
	if (n <= 1 || d > n)
		return (0);
	if (n == d)
		return (1);
	if (n % d == 0)
		return (0);
	return (check_if_prime(n, d + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: integer
 *
 * Return: natural square root of n; or -1 if it doesn't exist
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_prime(n, 2));
}
