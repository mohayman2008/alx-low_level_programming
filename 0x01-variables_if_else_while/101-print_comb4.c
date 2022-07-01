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
	int j, k;

	while (i < start_ascii + 10)
	{
		j = i + 1;
		while (j < start_ascii + 10)
		{
			k = j + 1;
			while (k < start_ascii + 10)
			{
				if (!(i == start_ascii && j == i + 1 && k == j + 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i);
				putchar(j);
				putchar(k);
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
