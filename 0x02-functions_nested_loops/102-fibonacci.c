#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *
 * Return: 0 (In case of no errors)
 */

int main(void)
{
	const int COUNT = 50;
	int i = 0;
	unsigned long tmp1 = 1, tmp2 = 2;
	unsigned long current = 0;

	printf("%lu, %lu", tmp1, tmp2);
	while (i < COUNT - 2)
	{
		current = tmp1 + tmp2;
		printf(", %lu", current);
		tmp1 = tmp2;
		tmp2 = current;
		i++;
	}
	printf("\n");
	return (0);
}
