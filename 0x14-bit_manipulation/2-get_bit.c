#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: unsigned long integer
 * @index: the index of the bit
 *
 * Return: the value of the bit or (-1) on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1, msd = sizeof(n) * 8 - 1;

	if (index > msd)
		return (-1);

	mask = mask << index;
	n &= mask;

	return (n >> index);
}
