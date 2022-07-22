#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of input arguments
 * @argv: vector of input arguments strings
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc ; i++)
		printf("%s\n", argv[i]);

	return (0);
}
