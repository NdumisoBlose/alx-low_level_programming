#include "main.h"

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: int size of input
 * @c: input char
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(*a));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
