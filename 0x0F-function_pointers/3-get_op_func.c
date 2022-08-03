#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - select the correct calculation function
 *
 * @s: string containg the operator of the operation to be performed
 *
 * Return: pointer to function which takes two int parameters and return an
 *	integer or NULL for invalid inputs
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
