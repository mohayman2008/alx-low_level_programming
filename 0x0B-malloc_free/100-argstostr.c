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
			while (str[i][len])
				len++;

		}
		sum += len;
	}
	return (sum);
}

/**
 * argstostr - concatenates strings passed as an array of strings
 * it appends \n charcter after each string
 * @ac: strings count
 * @av: strings vector
 *
 * Return: pointer to the concatenated string or NULL (if allocation failed)
 */
char *argstostr(int ac, char **av)
{
	int size, idx = 0, i, j;
	char *ptr;

	if (!av || ac < 1)
		return (NULL);

	size = sum_str_len(av, ac) + ac; /* making space for the '/n' chars */

	ptr = malloc(sizeof(char) * size + 1);
	if (!ptr)
		return (NULL);

	while (idx < size)
	{
		for (i = 0 ; i < ac ; i++)
		{
			j = 0;
			if (av[i])
			{
				for (; av[i][j] ; j++, idx++)
					ptr[idx] = av[i][j];
				ptr[idx++] = '\n';
			}
		}
	}
	ptr[idx] = '\0';
	return (ptr);
}
