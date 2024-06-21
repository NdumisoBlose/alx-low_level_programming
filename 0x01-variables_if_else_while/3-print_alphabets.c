#include <stdio.h>
#include <stdlib.h>

/**
 * main - Printing alphabets in lowercase then in uppercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; ++letters)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; ++letters)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
