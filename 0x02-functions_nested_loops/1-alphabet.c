#include "main.h"

/**
 * print_alphabet - printing the alphabet in lowercase
 *
 * Return - Always 0 (Success)
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
