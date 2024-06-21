#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers of base16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chars;
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
	}
	for (chars = 'a'; chars <= 'f'; chars++)
	{
		putchar(chars);
	}
	putchar('\n');

	return (0);
}
