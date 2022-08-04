#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers passed as parameters
 * @separator: the string to be printed between numbers
 * @n: count of the unnamed arguments to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	for (; i < n ; i++)
	{
		if (i && separator)
			printf("%s", separator);
		printf("%d", va_arg(ap, int));
	}
	putchar('\n');
}
