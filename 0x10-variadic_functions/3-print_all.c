#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

typedef struct fmt
{
	char *fmt_c;
	void (*print)(va_list);
} fmt;

void print_char(va_list ap)
{
	printf("%c", (char) va_arg(ap, int));
}

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f", (float) va_arg(ap, double));
}

void print_string(va_list ap)
{
	char *str = va_arg(ap, char *);

	printf("%s", str);
/**
 *	if (str)
 *	{
 *		printf("%s", str);
 *		return;
 *	}
 *	printf("(nil)");
*/
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
			if (format[i] == fmt_a[j].fmt_c[0])
			{
				fmt_a[j].print(ap);
				break;
			}
			j++;
		}
		if (fmt_a[j].fmt_c && format[i + 1])
			printf(", ");
		i++;
	}
	va_end(ap);
	putchar('\n');
}
