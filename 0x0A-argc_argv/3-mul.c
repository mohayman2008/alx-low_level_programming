#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers and prints the result
 * @argc: number of input arguments
 * @argv: vector of input arguments strings
 *
 * Return: 0 or 1 if the arguments is anything but 2 arguments
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
