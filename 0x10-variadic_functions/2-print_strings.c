#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as parameters
 * @separator: the string to be printed between strings
 * @n: count of the unnamed arguments to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *str;
	va_list ap;

	va_start(ap, n);
	for (; i < n ; i++)
	{
		if (i && separator)
			printf("%s", separator);
		str = va_arg(ap, char *);
		printf("%s", str ? str : "(nil)");
	}
	putchar('\n');
}
