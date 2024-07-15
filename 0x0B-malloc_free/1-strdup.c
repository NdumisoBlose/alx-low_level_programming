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
	char *a;
	int i, j;

	if (str == 0)
	{
		return (NULL);
	}
	for (i = 0; i != '\0'; i++)
	{
		;
	}
	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}
	a[j] = '\0';

	return (a);
}
