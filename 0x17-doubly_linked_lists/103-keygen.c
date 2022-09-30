#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * f1 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f1(char *user __attribute__((unused)), int len)
{
	return ((len ^ 0x3b) & 0x3f);
}

/**
 * f2 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f2(char *user, int len)
{
	int i = 0, result = 0;

	for (; i < len ; i++)
	{
		result += user[i];
	}

	return ((result ^ 0x4f) & 0x3f);
}

/**
 * f3 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f3(char *user, int len)
{
	int i = 0, result = 1;

	for (; i < len ; i++)
		result *= user[i];

	return ((result ^ 0x55) & 0x3f);
}

/**
 * f4 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f4(char *user, int len)
{
	int i = 0, result = *user;

	for (; i < len ; i++)
		if (user[i] > result)
			result = user[i];
	srand(result ^ 0xe);
	return (rand() & 0x3f);
}

/**
 * f5 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f5(char *user, int len)
{
	int i = 0, result = 0;

	for (; i < len ; i++)
	{
		result += user[i] * user[i];
	}

	return ((result ^ 0xef) & 0x3f);
}

/**
 * f6 - performs some calculations
 * @user: username string
 * @len: length of username string
 *
 * Return: the result of the calculations
 */
int f6(char *user, int len __attribute__((unused)))
{
	int i = 0, result = 0;

	for (; user[0] > i; i++)
		result = rand();

	return ((result ^ 0xe5) & 0x3f);
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
	unsigned char *user, pass[7], *hash;
	int len, res, i;
	unsigned long int x[] = {0x3877445248432d41, 0x42394530534e6c37,
				0x4d6e706762695432, 0x74767a5835737956,
				0x2b554c59634a474f, 0x71786636576a6d34,
				0x723161513346655a, 0x6b756f494b646850};
	int (*func[])(char *, int) = {f1, f2, f3, f4, f5, f6};

	if (ac != 2)
	{
		fprintf(stderr, "Usage: %s <username>\n", av[0]);
		return (EXIT_FAILURE);
	}

	user = av[1];
	len = strlen(user);
	pass[6] = 0;

	hash = (unsigned char *) &x;
	for (i = 0 ; i < 6 ; i++)
		pass[i] = hash[func[i](user, len)];

	printf("%s", pass);

	return (EXIT_SUCCESS);
}
