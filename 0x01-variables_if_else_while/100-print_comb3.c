#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all possible combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	int singles;
	int doubles;

	while (number <= 99)
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
		number++;
	}
	putchar('\n');

	return (0);
}
