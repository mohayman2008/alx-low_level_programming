#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of the program used to execute it from shell
 * @argc: number of input arguments
 * @argv: vector of input arguments strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
