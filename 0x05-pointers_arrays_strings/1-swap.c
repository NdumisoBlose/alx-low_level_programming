#include "main.h"

/**
 * swap_int - swaps the values of 2 integers
 * @a: value of first parameter
 * @b: value of second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
