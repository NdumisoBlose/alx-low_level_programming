#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c, v, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;

			if (c > 9)
			{
				v = c % 10;
				z = (c - v) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(z);
				_putchar(v);
			}
			else
			{
				if (b != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(c);
			}
		}
		_putchar('\n');
	}
}
