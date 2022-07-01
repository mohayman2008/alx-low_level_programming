#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
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
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
