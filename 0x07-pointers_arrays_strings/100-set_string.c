#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the address, pointed to it by a pointer @s,
 *	to be the address stored in @to
 * @s: pointer to char pointer
 * @to: char pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
