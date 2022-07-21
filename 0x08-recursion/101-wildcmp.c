#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string
 * @s2: string to be compare s1 with, may include the wild character '*'
 *
 * Return: 1 if s1 and s2 are considered identical or 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{

	if (!*s1 && (!*s2 || (s2[0] == '*' && !s2[1])))
		return (1);
	if (*s2 == '*')
	{
		if (s2[1] == '*')
			return (wildcmp(s1, s2 + 1));
		if (s2[1] && !*s1)
			return (0);
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return ((*s1 == *s2) && wildcmp(s1 + 1, s2 + 1));
}
