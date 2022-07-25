#include <stdlib.h>
#include <stdio.h>

/**
 * sum_str_len - calculate the sum of lengthes of the strings in
 *	an array of strings
 * @str: array of strings
 * @size: number of strings in the array
 *
 * Return: The sum
 */
unsigned int sum_str_len(char **str, unsigned int size)
{
	unsigned int sum = 0;
	unsigned int i, len;

	for (i = 0 ; i < size ; i++)
	{
		len = 0;
		if (str[i])
		{
			while (str[len])
				len++;

		}
		sum += len;
	}
	return (sum);
}

/**
 * str_concat - concatenates two strings into a newly allocated memory
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to the concatenated string or NULL (if allocation failed)
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size, idx = 0, i, j;
	char *p[2];
	char *ptr;

	p[0] = s1;
	p[1] = s2;
	size = sum_str_len(p, 2);

	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);

	while (idx < size)
	{
		for (i = 0 ; i < 2 ; i++)
		{
			j = 0;
			for (; p[i][j] ; j++, idx++)
				ptr[idx] = p[i][j];
		}
	}
	ptr[idx] = '\0';
	return (ptr);
}
