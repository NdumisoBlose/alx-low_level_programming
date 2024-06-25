#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times in lowercase
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letters;
	int i = 0;

	while (i<10)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
	 	_putchar('\n');
		i++;
	}
}
