#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random password generator for 101-crackme
 *
 * Return: 0 (if everything goes well)
 */
int main(void)
{
	int i, x;
	int sum = 0;
	char pool[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char key[58];

	srand(time());
	
	while (sum != 2772)
	{
		i = 0;
		sum = 0;
		
		while (sum < (2772 - 'z'))
		{
			x = rand() % 62;
			key[i] = pool[x];
			sum += pool[x];
			i++;
		}
		
		if (sum == 2772 - 'z')
		{
			key[i] = 'z';
			sum += 'z';
		}
		i++;
	}
	key[i] = '\0';
	printf("%s", key);
	return (0);
}
