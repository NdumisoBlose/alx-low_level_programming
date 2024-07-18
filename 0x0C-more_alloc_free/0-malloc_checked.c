#include "main.h"
#include <limits.h>

/**
 * malloc_checked - allocate memory with malloc
 * @b: int input
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
