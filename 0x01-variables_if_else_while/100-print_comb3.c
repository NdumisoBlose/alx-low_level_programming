#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	int singles;
	int doubles;

	for (number = 0; number <= 99; number++)
	{
		singles = number / 10;
		doubles = number % 10;

		if (singles < doubles)
		{
			putchar(singles + '0');
			putchar(doubles + '0');
			if (number < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
