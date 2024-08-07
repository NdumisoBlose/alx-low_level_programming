#include "main.h"

/**
 * checking - checks from 1 to n
 * @i: same integer as n
 * @j: number that iterates from 1 to n
 * Return: 1 if successful, else -1
 */
int checking(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (checking(i, j + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: input Integer
 * Return: 1 if successful, else -1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checking(n, 2));
}
