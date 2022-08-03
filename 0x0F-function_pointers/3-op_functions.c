#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the calculation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract an integer @b from another @a
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the calculation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the calculation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dividies an integer @a by integer @b
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the calculation
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the reminder of the division of integer @a by integer @b
 * @a: 1st integer
 * @b: 2nd integer
 *
 * Return: the result of the calculation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
