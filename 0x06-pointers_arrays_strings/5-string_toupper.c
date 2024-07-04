#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a string to uppercase
 * @hi: input string
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *c)
{
	int i = 0;
	int letter = 'a' - 'A';

	for (i = 0; c[i] != '\0'; ++i)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - letter;
		}
	}
	return (c);
}
