#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0');
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
