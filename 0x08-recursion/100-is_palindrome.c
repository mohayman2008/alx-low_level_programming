#include "main.h"
#include <stdlib.h>
#include <string.h>

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

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: a string
 *
 * Return: 1 if s is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;
        int test;
	char *sn;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	sn = malloc(len - 2 * sizeof(s[0]));
	memcpy(sn, s + 1, len - 1);
	sn[len - 2] = '\0';

	test = (s[0] == s[len - 1]) && is_palindrome(sn);

	free(sn);
	return (test);
}
