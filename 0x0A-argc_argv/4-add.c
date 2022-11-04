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
		for (i = 0; i < argc; i+)
		{
			if (strcmp(argv, num) != 0)
				break;

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
	else if (argc < 1)
		printf("0\n");

	return (0);
}
