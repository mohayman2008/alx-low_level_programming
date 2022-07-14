#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to be printed
 * @size: number of bytes to be printed of the buffer
 */
void print_buffer(char *b, int size)
{
	const int LINE_LEN = 10;
	int start = 0;
	int i, idx;
	char tmp[11];

	tmp[10] = '\0';
	while (start < size)
	{
		if (start != 0)
			putchar('\n');

		printf("%08x: ", start);

		for (i = 0 ; i < LINE_LEN ; i++)
		{
			idx = start + i;
			if (idx < size)
			{
				printf("%02x", b[idx]);
				tmp[i] = (b[idx] < 32) ? '.' : b[idx];
			}
			else
			{
				printf("  ");
				tmp[i] = '\0';
			}
			if (i % 2 != 0)
				putchar(' ');
		}
		printf("%s", tmp);

		start += 10;
	}
	putchar('\n');
}
