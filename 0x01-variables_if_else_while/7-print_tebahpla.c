#include <stdio.h>

/**
 * main - prints the alphabet in reverse and in lower case
 *
 *
 * Return: 0 (if no error)
 */
int main(void)
{
      char i = 'z';
      while (i >= 'a')
	    putchar(i--);
      putchar('\n');
    return (0);
}
