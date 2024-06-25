#include "main.h"

/**
 * print_sign - prints the sign of the number
 * @n: chacter chosen to be checked
 *
 * Return: 1 prints + if n > 0, 0 prints 0 if is 0, -1 prints - if < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
