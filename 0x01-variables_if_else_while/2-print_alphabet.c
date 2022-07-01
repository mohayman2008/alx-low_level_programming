#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 *
 * Return: 0 (if no error)
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
		putchar(i++);
	putchar('\n');
	return (0);
}
