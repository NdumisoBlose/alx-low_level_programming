#include "main.h"

/**
 * print_line - draws a straight in terminal
 * @n: value for the length of the line
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
	else
	_putchar('\n');
}
