#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * _isdigit - checks for a digit character '0' -> '9'
 * @c: ASCII number of a character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _atoi - converts a string to an integer
 * @s: string containing integer
 *
 * Return: integer converted from a string
 */

int _atoi(char *s)
{
	int i = 0;
	int num = 0, digit, multiplier = 1;
	int num_found = 0;

	while (s[i] != '\0')
	{
		if (num_found && !(_isdigit(s[i])))
			break;
		if (s[i] == '-')
			multiplier *= -1;
		else if (_isdigit(s[i]))
		{
			digit = s[i] - 48;
			num_found = 1;

			if (multiplier == 1)
			{
				if (num != 0 && (INT_MAX / num) >= 10)
					num *= 10;
				if ((INT_MAX - num) >= digit)
					num += digit;
			}
			else if (multiplier == -1)
			{
				if (num > 0)
					num *= -1;
				if (num != 0 && (INT_MIN / num) >= 10)
					num *= 10;
				if (INT_MIN - num <= -digit)
					num -= digit;
			}
		}
		i++;
	}
	return (num);
}
