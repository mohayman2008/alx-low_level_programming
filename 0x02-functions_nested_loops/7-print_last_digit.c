#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of the number
 * @n: input number
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	_putchar((n % 10) + 48);
	return (n % 10);
}
