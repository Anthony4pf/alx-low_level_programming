#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - starting point of your program
*@argc: arguments count
*@argv: arguments vector
*Return: Success
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc && *argv[i] >= '0' && *argv[i] <= '9'; i++)
		{
			sum += atoi(argv[i]);
		}

		if (i == argc)
			printf("%d\n", sum);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
