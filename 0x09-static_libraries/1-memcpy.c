#include "main.h"

/**
 * _memcpy - function copies n bytes from mem area to src to memory area dest
 * @dest: bytes destination
 * @src: bytes source
 * @n: bytes to copy
 * Return: pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
