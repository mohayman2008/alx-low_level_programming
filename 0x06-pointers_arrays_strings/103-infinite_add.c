#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(char *s);
void rev_string(char *s);

/**
 * _strlen - find the length of a given string
 * @s: pointer to char array
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * rev_string - reverse the order of chracters of a string
 * @s: string
 */
void rev_string(char *s)
{
	long i;
	long len = _strlen(s);
	char tmp;

	for (i = 0 ; i < len / 2 ; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

/**
 * infinite_add - adds 2 numbers, stores the result in char* buffer
 *
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: buffer to hold the result
 * @size_r: size of buffer r
 *
 * Return: pointer to the result buffer or
 * (0) if the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2;
	int i, sum, co = 0; /* co: carry over */
	char *tmp_ptr;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	if (len1 > (size_r - 1) || len2 > (size_r - 1))
		return (0);
	if (len1 < len2)
	{
		tmp_ptr = n1;
		n1 = n2;
		n2 = tmp_ptr;
	}

	for (i = 1 ; i <= len1 ; i++)
	{
		if (i <= len2)
			sum = (n1[len1 - i] - 48) + (n2[len2 - i] - 48) + co;
		else
			sum = (n1[len1 - i] - 48) + co;
		r[i - 1] = (sum % 10) + 48;
		co = sum / 10;
	}
	if (co)
	{
		if (size_r < len1 + 2)
			return (0);
		r[i - 1] = co + 48;
		i++;

	}
	r[i - 1] = '\0';

	rev_string(r);
	return (r);
}
