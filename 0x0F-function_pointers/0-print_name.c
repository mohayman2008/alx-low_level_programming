#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a string formatted by a function
 * @name: input name string
 * @f: formatting function for printing the string
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
