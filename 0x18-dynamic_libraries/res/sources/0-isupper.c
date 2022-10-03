#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: ASCII number of a character
 *
 * Return: 1 if uppercase letter, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c < 'A' + 26)
		return (1);
	else
		return (0);
}
