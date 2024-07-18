#include "main.h"

/**
 * string_nconcat - function to concatnate strings with n bytes
 * @s1: destination for concatnation
 * @s2: source of string
 * @n: int type for size of byte
 * Return: pointer to new memory allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int sign = n;
	char *c;
	int length1, length2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;
	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	if (sign >= length2)
	{
		sign = length2;
		c = malloc(sizeof(char) * (length1 + length2 + 1));
	}
	else
		c = malloc(sizeof(char) * (length1 + n + 1));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
	{
		c[i] = s1[i];
	}
	for (j = 0; j < sign; j++)
	{
		c[i++] = s2[j];
	}
	c[i++] = '\0';
	return (c);
}
