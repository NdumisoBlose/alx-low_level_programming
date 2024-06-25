#include <stdlib.h>
#include "main.h"

/**
 * main - checks for lower case character
 *
 * Return: 1 if its lowercae and  0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
