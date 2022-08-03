#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - perform calculations on two integers and prints the result
 * @argc: number of input arguments
 * @argv: array of input arguments
 *
 * Return: 0
 * Usage: calc num1 operator num2
 * operator is one of the following: {+, -, *, /, %}
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && !n2)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(n1, n2));
	return (0);
}
