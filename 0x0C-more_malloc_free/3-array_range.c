#include "main.h"
#include <string.h>

/**
 * array_range - make  memory for an array
 * @min: int input
 * @max: int inpur
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
	{
		return (NULL);
	}

	i = malloc(sizeof(int) * (max - min + 1));
	if (i == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (min <= max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}
