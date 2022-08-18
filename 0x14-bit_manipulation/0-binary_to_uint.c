#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string represents binary number and consists of '0's and '1's
 *
 * Return: the number as value or 0 if @b is NULL or contains incorrect chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, m = 1;
	int i, len = 0;

	if (!b)
		return (0);
	while (b[len])
		len++;
	for (i = len - 1 ; i >= 0 ; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		x += (b[i] - '0') * m;
		m *= 2;
	}

	return (x);
}
