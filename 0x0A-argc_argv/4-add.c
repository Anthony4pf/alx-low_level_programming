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

		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}

			sum += atoi(argv[i]);
		}
			printf("%d\n", sum);

	return (0);
}
