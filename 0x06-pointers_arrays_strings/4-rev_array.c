#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: input array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, last;

	last = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int beginning, end;

		beginning = a[i];
		end = a[last];
		a[i] = end;
		a[last] = beginning;
		last--;
	}
}
