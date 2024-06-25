#include "main.h"

/**
 * isalpha - checks for alphabetic chacater
 * @c: character chosen to be checked
 *
 * Return: 1 is character is a letter and 0 for otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90) || (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
