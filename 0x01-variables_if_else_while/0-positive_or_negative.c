#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - generates a random number and check if its +ve or -ve
 *
 * Return: 0 (if no error)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d ", n);
	if (n == 0)
		puts("is zero");
	else if (n > 0)
		puts("is positive");
	else
		puts("is negative");
	return (0);
}
