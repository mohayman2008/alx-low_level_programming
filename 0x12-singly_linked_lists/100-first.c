#include <stdio.h>

/**
 * construct - run code before main()
 */
__attribute__ ((constructor))
void construct(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
