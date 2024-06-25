#include <stdlib.h>
#include "main.h"

/**
 * _islower - checks for lower case character
 * @c - character chosen to be checked
 *
 * Return: 1 if its lowercase and  0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
