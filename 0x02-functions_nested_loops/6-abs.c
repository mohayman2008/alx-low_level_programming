#include "main.h"

/**
 * _abs - computes the absolute number of an int
 * @n: input number
 *
 * Return: 1 if +ve, 0 if 0 , -1 if -ve
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
