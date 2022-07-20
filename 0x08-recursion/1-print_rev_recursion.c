#include "main.h"

/**
 * _print_rev_recursion - prints a string to stdout in reverse recursively
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
