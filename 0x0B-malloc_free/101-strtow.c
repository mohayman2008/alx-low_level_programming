#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * strtow - splits a string into words and storying them in a dynamically
 *	allocated array of string (Don't foget to free() it after using)
 * @str: strings count
 *
 * Return: pointer to the generated array or NULL (if allocation failed)
 */
char **strtow(char *str)
{
	unsigned int size = 0, j, i = 0, count = 0;
	char **str_arr;
	char *s;

	if (!str || !*str)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		count = str[i] && str[i] != ' ' ? count + 1 : count;
		for (; str[i] && str[i] != ' ' ; i++)
			size++;
	}

	size = sizeof(char *) * (count + 1) + sizeof(char) * (size + count);
	str_arr = malloc((size_t) size);
	if (!str_arr)
		return (NULL);
	str_arr[count] = NULL;
	s = (char *) (str_arr + count + 1);

	i = 0;
	for (j = 0 ; j < count ; j++)
	{
		while (str[i] == ' ')
			i++;
		str_arr[j] = str[i] != ' ' ? s : str_arr[j];
		for (; str[i] && str[i] != ' ' ; i++, s++)
			*s = str[i];
		*s++ = '\0';
	}
	return (str_arr);
}
