#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates n characters of the 2nd strings to
 *	the 1st string and stores the resulted string in a newly allocated memory
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes included from s2
 *
 * Return: pointer to the concatenated string or NULL (if allocation failed)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, size, idx = 0, i;
	char *ptr;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	n = n <= len2 ? n : len2;
	size = len1 + n + 1;

	ptr = malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);

	if (s1)
	{
		for (i = 0 ; s1[i] ; i++, idx++)
			ptr[idx] = s1[i];
	}

	if (s2)
	{
		for (i = 0 ; i < n ; i++, idx++)
			ptr[idx] = s2[i];
	}

	ptr[idx] = '\0';
	return (ptr);
}
