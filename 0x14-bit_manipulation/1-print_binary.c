#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned int
 * @n: unsigned long integer
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 0, nz = 0; /* nz is is_not_zero flag */
	unsigned long int mask = 1, msd = sizeof(n) * 8 - 1;
	char c;

	mask = mask << msd;
	for (; i <= msd ; i++)
	{
		c = (n << i) & mask ? '1' : '0';
		if (nz)
			putchar(c);
		else if (c == '1')
			putchar(c), nz = 1;
	}

	if (!nz)
		putchar('0');
}
