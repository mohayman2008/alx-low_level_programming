#include <stdlib.h>

int rand(void)
{
	static int count = 0;
	int output[] = {8, 8, 7, 9, 23, 74};
//	int output[] = {9, 8, 10, 24, 75, 9};
	int result;


	if (count < 6)
		result = output[count];
	else
		result = RAND_MAX;
	count++;
	return result;
}
