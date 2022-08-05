#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_char - print a character from the 1st position of va_list
 * @ap: list of optional arguments
 *
 * Return: always (1)
 */
int print_char(va_list ap)
{
	printf("%c", (char) va_arg(ap, int));
	return (1);
}

/**
 * print_int - print an integer from the 1st position of va_list
 * @ap: list of optional arguments
 *
 * Return: always (1)
 */
int print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
	return (1);
}

/**
 * print_float - print a float from the 1st position of va_list
 * @ap: list of optional arguments
 *
 * Return: always (1)
 */
int print_float(va_list ap)
{
	printf("%f", (float) va_arg(ap, double));
	return (1);
}

/**
 * print_string - print a string from the 1st position of va_list
 * @ap: list of optional arguments
 *
 * Return: always (1)
 */
int print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str)
	{
		printf("%s", str);
		return (1);
	}
	printf("(nil)");

	return (1);
}

/**
 * print_all - prints objects passed as parameters using format string @format
 * @format: the formatting string
 */
void print_all(const char * const format, ...)
{
	fmt fmt_a[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0;
	va_list ap;

	va_start(ap, format);
	while (format[i])
	{
		j = 0;
		while (fmt_a[j].fmt_c)
		{
			if ((format[i] == fmt_a[j].fmt_c[0]) &&
				fmt_a[j].print(ap) && format[i + 1])
				printf(", ");

			j++;
		}
		i++;
	}
	va_end(ap);
	putchar('\n');
}
