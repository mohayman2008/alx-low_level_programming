#include <stdio.h>
#include "main.h"
#include <limits.h>


/**
 * print_last_digit - prints the last digit of the number
 * @n: input number
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	n %= 10;
	n < 0 ? n = n * -1 : n;
	_putchar(n + 48);
	return (n);
}
