#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	chat c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++
	}
	_putchar("\n");
}
