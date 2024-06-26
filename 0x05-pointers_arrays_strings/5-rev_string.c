#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char reversal;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		reversal = s[j];
		s[j] = s[i];
		s[i] = reversal;
	}
}
