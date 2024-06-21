#include <stdio.h>
#include <stdlib.h>

/**
 * main - print single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		printf("%d", numbers);
	}
	putchar('\n');
	return (0);
}
