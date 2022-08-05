#ifndef __VARIADIC_FUNCTIONS_H__
#define __VARIADIC_FUNCTIONS_H__

#include <stdarg.h>

/**
 * struct fmt - format/print function map element
 * @fmt_c: formatting character string
 * @print: pointer to the associated print function
 */
typedef struct fmt
{
	char *fmt_c;
	int (*print)(va_list);
} fmt;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* __VARIADIC_FUNCTIONS_H__ */
