#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: output destination
 * @src: input source
 * @n: number of bytes from source
 * Return: pointer to resulting string destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int index, count;

	for (index = 0; dest[index] != '\0'; index++)
	{
		for (count = 0; count < n && src[count] != '\0'; count++)
		{
			dest[index] = src[count];
			index++;
		}
		if (count < n)
		{
			dest[index] = '\0';
		}
	}
	return (dest);
}
