#include <stdio.h>

/**
 * main - Calculate sum of multiples of 3 & 5 below 1024 (Excluded)
 *
 *
 * Return: 0 (In case of no errors)
 */

int main(void)
{
	const int LIMIT_VALUE = 1024;
	int sum = 0;
	int i = 0;

	while (i < LIMIT_VALUE)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
