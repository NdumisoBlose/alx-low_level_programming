#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, times;

	times = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		times = times * atoi(argv[i]);
	}
	printf("%d\n", times);
	return (0);
}
