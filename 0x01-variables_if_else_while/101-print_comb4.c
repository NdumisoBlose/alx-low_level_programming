#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combinations of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;
	int singles;
	int doubles;
	int triples;

	for (number = 0; number < 1000; number++)
	{
		singles = number % 10;
		doubles = (number / 10) % 10;
		triples = number / 100;

		if (triples < doubles && doubles < singles)
		{
			putchar(triples + '0');
			putchar(doubles + '0');
			putchar(singles + '0');

			if (number < 700)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
