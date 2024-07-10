#include "main.h"

/**
 * _puts_recursion - prints string, followed by a new line
 * @s: string input
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (s[0] != '\0')
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
	else
	{
		return;
	}
	_putchar('\n');
}
