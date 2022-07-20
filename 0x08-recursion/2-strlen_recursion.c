#include "main.h"

/**
 * _strlen_recursion - find the length of a string recursively
 * @s: string
 *
 * Return: length of @s
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
