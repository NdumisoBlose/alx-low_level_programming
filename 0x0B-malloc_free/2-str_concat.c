#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: a returned pointer  should point to a 
 * newly allocated space in memory which contains 
 * the contents of s1, followed by the contents of s2, and null terminated
 * if NULL is passed, treat it as an empty string
 * The function should return NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	int i, j = 0, length = 0;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}
	c = malloc(sizeof(char) * length);
	if (c == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		c[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		c[j++] = s2[i];
	}
	return (c);
}
