#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of input arguments
 * @argv: array of input arguments
 *
 * Return: 0
 * Usage: ./main number_of_bytes
 */
int main(int argc, char **argv)
{
	int (*func)(int, char **);
	char *code;
	int n, i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	func = &main;
	code = (char *) func;
	for (; i < n ; i++)
	{
		if (i)
			putchar(' ');
		printf("%02x", 0xff & code[i]);
	}
	if (n)
		putchar('\n');
	return (0);
}
