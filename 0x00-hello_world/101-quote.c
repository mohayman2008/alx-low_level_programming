#include <stdio.h>

/**
 * main - Entry point
 *
 * Sends a sentence to stderr
 *
 * Return: Always 1
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(quote, 59, sizeof(char), stderr);
	return (1);
}
