#include <stdio.h>
#include <stdlib.h>

/**
*main - multiplies two numbers
*@argc: argument count
*@argv: argument vector
*Return: 1 if more than two arguments
*/

int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}

		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
