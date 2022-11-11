#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - multiply two arguments
*@argc: argument counter
*@argv: argument vector
*Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	unsigned long mul = 1;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}

		mul *= atoi(argv[i]);
	}

	printf("%lu\n", mul);

	return (0);
}
