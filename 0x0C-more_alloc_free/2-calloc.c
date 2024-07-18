#include "main.h"

/**
 * _calloc - function to allocates memory
 * @nmemb: int input 1
 * @size: int input 2
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
		c[i] = 0;
		i++;
	}
	return (c);
}
