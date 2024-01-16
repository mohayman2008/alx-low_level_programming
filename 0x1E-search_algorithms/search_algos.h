#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#ifndef _DEFAULT_SOURCE
#define _DEFAULT_SOURCE
#endif /* _DEFAULT_SOURCE */

#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>

/*--------------------------Prototypes--------------------------*/
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* __SEARCH_ALGOS_H__ */
