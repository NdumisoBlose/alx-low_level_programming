#include "main.h"

/**
 * _strdup -  function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string given as a parameter
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *c;
	int i, j;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		j++;
	}
	c = malloc(sizeof(char) * (j + 1));
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}
	c[j] = '\0';

	return (c);
}
