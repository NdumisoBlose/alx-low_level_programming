#include "main.h"
/**
 * print_square - function that draws a square
 * @size: the int chosen for my function
 * Return: 0
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
		j = 0;
		i++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
