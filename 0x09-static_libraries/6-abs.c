#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *@c: chosen character
 *
 * Return: value if c < 0, else c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int value;

		value = c * -1;

		return (value);
	}
	return (c);
}
