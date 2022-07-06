#include "main.h"

/**
 * print_sign - checks for lowercase letter
 *
 * int n: input number
 *
 * Return: 1 if +ve, 0 if 0 , -1 if -ve
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putc(43);
		return (1);
	}
	else if (n == 0)
	{
		_putc(48);
		return (0);
	}
	else
	{
		_putc(45);
		return (-1);
	}
}
