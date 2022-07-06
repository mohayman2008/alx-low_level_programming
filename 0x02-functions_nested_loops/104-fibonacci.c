#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 *
 * Return: 0 (In case of no errors)
 */

int main(void)
{
	const int COUNT = 98;
	const unsigned long MAX_DIGITS = 1000000000000000000;
	int i = 0;
	unsigned long tmp1_lsd = 1, tmp1_hsd = 0;
	unsigned long tmp2_lsd = 2, tmp2_hsd = 0;
	unsigned long current_lsd = 0, current_hsd = 0;

	printf("%lu, %lu", tmp1_lsd, tmp2_lsd);
	while (i < COUNT - 2)
	{
		current_lsd = tmp1_lsd % MAX_DIGITS + tmp2_lsd % MAX_DIGITS;

		current_hsd = current_lsd / MAX_DIGITS;
		current_hsd += tmp1_lsd / MAX_DIGITS + tmp2_lsd / MAX_DIGITS;
		current_hsd += tmp1_hsd + tmp2_hsd;

		current_lsd %= MAX_DIGITS;

		tmp1_lsd = tmp2_lsd;
		tmp1_hsd = tmp2_hsd;

		tmp2_lsd = current_lsd;
		tmp2_hsd = current_hsd;

		printf(", ");
		if (current_hsd > 0)
			printf("%lu%lu", current_hsd, current_lsd);
		else
			printf("%lu", current_lsd);

		i++;
	}
	printf("\n");
	return (0);
}
