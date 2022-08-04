#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all its parameters
 * @n: count of the unnamed arguments to be summed
 *
 * Return: the resulted sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	for (; i < n ; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
}
