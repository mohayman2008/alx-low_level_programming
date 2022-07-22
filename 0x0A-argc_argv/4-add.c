#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - calculate the sum of input arguments
 * @argc: number of input arguments
 * @argv: vector of input arguments strings
 *
 * Return: 0 or 1 if an argument contains a non digit character
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;
	char c;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			for (j = 0 ; argv[i][j] ; j++)
			{
				c = argv[i][j];
				if (!(isdigit(c) || c == '-' || c == '+'))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

	return (0);
}
