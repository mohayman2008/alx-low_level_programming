#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * keygen - generate the password for arbitary user
 * @user: username string
 * @len: length of username string
 * @hash: hash array
 * @pass: string array of length > 6 to hold the generated password
 */
void keygen(char *user, int len, char *hash, char *pass)
{
	int i = 0, result = 0;

	pass[0] = hash[(len ^ 0x3b) & 0x3f];

	for (i = 0, result = 0; i < len ; i++)
		result += user[i];
	pass[1] = hash[(result ^ 0x4f) & 0x3f];

	for (i = 0, result = 1; i < len ; i++)
		result *= user[i];
	pass[2] = hash[(result ^ 0x55) & 0x3f];

	for (i = 0, result = *user ; i < len ; i++)
		if (user[i] > result)
			result = user[i];
	srand(result ^ 0xe);
	pass[3] = hash[rand() & 0x3f];

	for (i = 0, result = 0 ; i < len ; i++)
		result += user[i] * user[i];
	pass[4] = hash[(result ^ 0xef) & 0x3f];

	for (i = 0, result = 0 ; user[0] > i; i++)
		result = rand();

	pass[5] = hash[(result ^ 0xe5) & 0x3f];
}

/**
 * main - generate valid password for crackme5
 * @ac: arguments number
 * @av: arguments vector
 *
 * Return: EXIT SUCCESS on success or EXIT_FAILURE on failure
 */
int main(int ac, char **av)
{
	char *user, pass[7], *hash;
	int len;
	unsigned long int x[] = {0x3877445248432d41, 0x42394530534e6c37,
				0x4d6e706762695432, 0x74767a5835737956,
				0x2b554c59634a474f, 0x71786636576a6d34,
				0x723161513346655a, 0x6b756f494b646850};

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", av[0]);
		return (EXIT_FAILURE);
	}

	user = av[1];
	len = strlen(user);
	pass[6] = 0;
	hash = (char *) &x;

	keygen(user, len, hash, pass);

	printf("%s", pass);

	return (EXIT_SUCCESS);
}
