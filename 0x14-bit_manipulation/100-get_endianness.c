#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: (0) if big endian or (1) if little endian
 */
int get_endianness(void)
{
	unsigned int n = 0xff;
	unsigned char *ptr;

	ptr = (unsigned char *) &n;

	return(*ptr ? 1 : 0);
}
