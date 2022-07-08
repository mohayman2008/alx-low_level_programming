#include <stdio.h>

int is_prime(long);
long largest_prime_factor(long);

/**
 * main - prints the largest prime factor of the number
 *
 * Return: 0
 */

int main(void)
{
	const long NUM = 612852475143;
	/* 3 * 4019 * 50829599 = 612852475143 */

	printf("%ld\n", largest_prime_factor(NUM));
	return (0);
}

/**
 * is_prime - check if a number's absolute value is a prime number
 * considers 0 and 1 as prime numbers
 * @n: +ve number to check
 *
 * Return: 1 if prime, 0 elsewise
 */

int is_prime(long n)
{
	long i;

	for (i = 2 ; i < n ; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

/**
 * largest_prime_factor - find the largest prime factor
 * of a given number recursevly
 *
 * @n: the given number
 *
 * Return: the largest prime factor
 */

long largest_prime_factor(long n)
{
	long i = 2;

	while (i < n)
	{
		if ((n % i) == 0)
			return (largest_prime_factor(n / i));
		i++;
	}
	return (n);
}
