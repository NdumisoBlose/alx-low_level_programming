#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse then a new line
 * @s: value pointing to the string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	length = strlen(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
