#include <stdio.h>
#include <stdlib.h>

/**
*main - starting point of your program
*@argc: arguments count
*@argv: arguments vector
*Return: Success
*/

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

			sum += atoi(argv[i]);
	}

			printf("%d\n", sum);

	return (0);
}
