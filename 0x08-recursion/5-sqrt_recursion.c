#include "main.h"

/**
 * checking - checks input from n to base
 * @i: input compared and squared to base
 * @j: base input to check
 * Return: natural square root of a number
 */
int checking(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	if (i * i > j)
	{
		return (-1);
	}
	return (checking(i + 1, j));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer
 * Return: natural square root of a number
 */
int _sqrt_recrsion(int n)
{
	return (checking(1, n));
}
