#include <main.h>

/**
 * swap_int - swap 2 integers passed by reference
 * @a: pointer to integer 1
 * @b: pointer to integer 2
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
