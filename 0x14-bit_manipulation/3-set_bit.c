#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to be 1 (HIGH)
 * @n: pointer to unsigned long integer
 * @index: the index of the bit
 *
 * Return: (1) on success or (-1) on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1, msd = sizeof(*n) * 8 - 1;

	if (index > msd)
		return (-1);

	mask = mask << index;
	*n |= mask;

	return (1);
}
