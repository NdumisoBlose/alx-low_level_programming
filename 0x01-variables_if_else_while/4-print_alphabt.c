#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabets except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; ++letters)
	{
		if (letters != 'e' && letters != 'q')
		{
			putchar(letters);
		}
	}
	putchar('\n');

	return (0);
}
