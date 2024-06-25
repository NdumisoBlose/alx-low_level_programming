#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last value of the digit
 * @n: represents the digit
 *
 * Return: last value of digit
 */
int print_last_digit(int n)
{
	int value;

	value = n % 10;

	if (n < 0)
	{
		value = value * -1;
	}
	_putchar(value + '0');

	return (value);
}
