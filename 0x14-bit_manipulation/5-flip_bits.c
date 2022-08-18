#include "main.h"

/**
 * flip_bits - finds number of bit needs to be flipped to switch between two
 *		numbers
 * @n: unsigned long integer
 * @m: unsigned long integer
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0, count = 0;
	unsigned long int mask, msd = sizeof(n) * 8 - 1;

	mask = n ^ m;

	for (; i <= msd ; i++)
	{
		count += (mask << i) >> msd;
	}

	return (count);
}
