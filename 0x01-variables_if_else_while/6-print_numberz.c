#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers without using char
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar((number % 10) + '0');
	}
	putchar('\n');

	return (0);
}
