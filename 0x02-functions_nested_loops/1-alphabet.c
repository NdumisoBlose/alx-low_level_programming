#include <stdio.h>

/**
 * main - printing the alphabet in lowercase
 *
 * Return - Always 0 (Success)
 */
void print_alphabet(void)
{
	char letters;

	for(letters = 'a';letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return;
}
