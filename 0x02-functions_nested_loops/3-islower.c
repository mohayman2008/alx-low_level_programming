#include "main.h"

/**
 * _islower - checks for lowercase letter
 * @c: ASCII number of a character
 *
 * Return: 1 if lowercase letter, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c < 97 + 26)
		return (1);
	else
		return (0);
}
