#include "main.h"

/**
 * _isalpha - checks for lowercase letter
 * @c: Character ASCII number
 *
 * Return: 1 if letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c < 97 + 26)
		return (1);
	if (c >= 65 && c < 65 + 26)
		return (1);
	else
		return (0);
}
