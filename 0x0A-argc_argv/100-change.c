#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the minimum number of coins to make change for an amount
 *	of money
 * @argc: number of input arguments
 * @argv: vector of input arguments strings
 *
 * Return: 0 or 1 if error
 */
int main(int argc, char **argv)
{
	int result = 0;
	int i, cents, n;
	int values[] = {25, 10, 5, 2, 1};
	char c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0 ; argv[1][i] ; i++)
	{
		c = argv[1][i];
		if (!(isdigit(c) || c == '-' || c == '+'))
		{
			printf("Error\n");
			return (1);
		}
	}
	cents = atoi(argv[1]);

	for (i = 0 ; i < 5 ; i++)
	{
		n = cents / values[i];
		result += n;
		cents -= n * values[i];
	}

	printf("%d\n", result);

	return (0);
}
