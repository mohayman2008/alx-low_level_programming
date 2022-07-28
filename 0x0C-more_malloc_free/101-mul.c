#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *_calloc_ASCII0(unsigned int nmemb, unsigned int size);
int _strlen(char *s);
int _is_number(char *s);
void clean_num(char **s);
void err(char *msg, unsigned int x);
void rev_string(char *s);


/**
 * _calloc_ASCII0 - allocates memory for an array and populates its values with
 *	the ASCII value of '0' which is 48
 * @nmemb: num of members of the array
 * @size: size of each element
 *
 * Return: pointer to the allocated memory or NULL if allocation fails or
 *	if nmemb = 0 or size = 0
 */
void *_calloc_ASCII0(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, max;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	max = nmemb * size;
	for (i = 0 ; i < max ; i++)
		ptr[i] = 48;
	return ((void *) ptr);
}

/**
 * _strlen - find the length of a given string
 * @s: pointer to char array
 *
 * Return: The length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _is_number - checks if a string is a decimal number
 * @s: string
 *
 * Return: (1) if number or (0) if not
 */
int _is_number(char *s)
{
	unsigned int i = 0;

	if (!*s)
		return (0);

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

/**
 * clean_num - return the sign of a number string and increment
 *	the string pointer to the 1st digit
 *
 * Note: the string should be a number, the function don't check for it
 *
 * @s: pointer to string of a number
 *
 * Return: (+1) if (+ve) or (-1) if -ve or (0) if zero
 */
void clean_num(char **s)
{
	while (**s && **s == '0') /* cleaning zeros */
		(*s)++;
	if (!**s)
		(*s)--;
}

/**
 * err - throw an error and exit with <x> status
 * @msg: error msg
 * @x: exit status
 */
void err(char *msg, unsigned int x)
{
	printf("%s", msg);
	exit(x);
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
 * main - multiplies 2 numbers, passed as arguments and prints out the result
 *
 * @argc: arguments count
 * @argv: array of arguments strings
 *
 * Usage - mul num1 num2
 *	num1 : base10 number
 *	num2 : base10 number
 *
 * Return: 0 or 98 (if inputs are not exactly 2 arguments composed only of
 *	digits or if one of the inputs is not a valid number or no enough
 *	memory available
 */
int main(int argc, char **argv)
{
	unsigned int size, len1, len2, idx = 0;
	int i, j, co, mul, sum;
	char *out;

	if (argc != 3)
		err("Error\n", 98);
	if (!_is_number(argv[1]) || !_is_number(argv[2]))
		err("Error\n", 98);

	clean_num(argv + 1);
	clean_num(argv + 2);
	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	size = (len1 + len2 + 1);
	out = _calloc_ASCII0(size, sizeof(*out));
	if (!out)
		err("Error\n", 98);

	for (i = len1 - 1 ; i >= 0 ; i--)
	{
		co = 0;
		idx = len1 - 1 - i;
		for (j = len2 - 1 ; j >= 0 ; j--)
		{
			mul = (argv[1][i] - 48) * (argv[2][j] - 48) + co;
			sum = mul + out[idx] - 48;
			out[idx++] = sum % 10 + 48;
			co = sum / 10;
		}
		out[idx] = co + 48;
	}
	idx = out[idx] == '0' ? idx : idx + 1;
	out[idx] = '\0';
	rev_string(out);
	printf("%s\n", out);
	free(out);
	return (EXIT_SUCCESS);
}
