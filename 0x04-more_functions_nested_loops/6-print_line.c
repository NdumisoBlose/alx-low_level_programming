#include "main.h"

/**
 * print_line - function that draws a line.
 * @n: is the integer for my function
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
