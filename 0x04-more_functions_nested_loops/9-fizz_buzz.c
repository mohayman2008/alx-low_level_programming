#include <stdio.h>

/**
 * main - prints the Fizz-Buzz numbers till 100
 *
 *
 * Return: 0 if no error
 */
int main(void)
{
	const int LAST = 100;
	int i = 1;

	while (i <= LAST)
	{
		if ((i % 3) != 0 && (i % 5) != 0)
			printf("%d", i);
		else
		{
			if ((i % 3) == 0)
				printf("Fizz");
			if ((i % 5) == 0)
				printf("Buzz");
		}
		if (i < LAST)
			putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
