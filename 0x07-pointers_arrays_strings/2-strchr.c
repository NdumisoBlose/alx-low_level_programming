#include "main.h"
#include <stdio.h>

/**
* _strchr - Returns a pointer to the first occurrence
* of the character c in the string s, or NULL if the
* character is not found
*
* @s: string input
* @c: character input
*
* Return: pointer to first occcurence of c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
