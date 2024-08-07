#include "main.h"

/**
 * _pow_recursion - function for value of x raised to the power of y
 * @x: x integer input
 * @y: y integer input
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
