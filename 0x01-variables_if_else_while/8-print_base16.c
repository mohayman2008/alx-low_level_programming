#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 16 starting from 0
 *
 *
 * Return: 0 if no error
 */
int main(void)
{
      char i = '0';

      while (i <= '9')
	    putchar(i++);
      i = 'a';
      while (i <= 'f')
	    putchar(i++);
      putchar('\n');
    return (0);
}
