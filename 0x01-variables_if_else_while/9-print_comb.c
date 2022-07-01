#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *
 * Return: 0 if no error
 */
int main(void)
{
	int start_ascii = 48;
	int i = start_ascii;

	while (i < start_ascii + 10)
	{
		if (i != start_ascii)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i++);
	}
	putchar('\n');
	return (0);
}
