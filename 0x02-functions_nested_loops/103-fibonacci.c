#include <stdio.h>

/**
 * main - prints sum of fibonacci numbers smaller than MAX, starting at 1 & 2
 *
 *
 * Return: 0 (In case of no errors)
 */

int main(void)
{
	const unsigned long MAX = 4000000;
	int i = 0;
	unsigned long tmp1 = 1, tmp2 = 2;
	unsigned long current = 0;
	unsigned long sum = 2; /* Adding 2 which is the first even number */

	while (current <= MAX)
	{
		current = tmp1 + tmp2;

		if (current % 2 == 0)
			sum += current;
		tmp1 = tmp2;
		tmp2 = current;
		i++;
	}
	printf("%lu\n", sum);
	return (0);
}
