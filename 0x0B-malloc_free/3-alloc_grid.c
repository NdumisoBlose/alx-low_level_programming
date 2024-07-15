#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: integer array 1
 * @height: integer array 2
 * Return: returns a pointer to a 2 dimensional array of integers
 * return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	ar = (int **)malloc(sizeof(int *) * height);
	if (ar != NULL)
	{
		for (i = 0; i < height; i++)
		{
			ar[i] = (int *)malloc(sizeof(int) * width);
			if (ar[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					ar[i][j] = 0;
				}
			}
			else
			{
				while (i >= 0)
				{
					free(ar[i]);
					i--;
				}
				free(ar);
				return (NULL);
			}
		}
		return (ar);
	}
	else
	{
		return (NULL);
	}
}
