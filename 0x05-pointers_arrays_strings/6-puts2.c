#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: string to be printed
 * Return: void
 */
void puts2(char *str)
{
	for ( i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
