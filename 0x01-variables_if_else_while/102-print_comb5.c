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
	int ascii_offset = 48;
	int n1 = 0, n2;

	while (n1 <= 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			if (!(n1 == 00 && n2 == n1 + 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(n1 / 10 + ascii_offset);
			putchar(n1 % 10 + ascii_offset);
			putchar(' ');
			putchar(n2 / 10 + ascii_offset);
			putchar(n2 % 10 + ascii_offset);
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
