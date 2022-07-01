#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Execluded letters are q and e
 *
 * Return: 0 (if no errors)
 */
int main(void)
{
      char i = 'a';
      while (i <= 'z')
      {
	    if (i != 'e' && i != 'q')
		  putchar(i++);
	    else
		  i++;
      }
      putchar('\n');
    return (0);
}
