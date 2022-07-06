#include "main.h"

/**
 * _islower - checks for lowercase letter
 *
 * c: integer
 *
 * Return: 1 if lower, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c < 97 + 26)
		return (1);
	else
		return (0);
}
