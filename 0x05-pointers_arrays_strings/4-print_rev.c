#include "main.h"

/**
 * print_rev - prints a string in reverse then a new line
 * @s: value pointing to the string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int j;
	int length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;

	for (j = length + 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
