#include <stdio.h>
#include "main.h"

/**
*print_to_98 - print inputted number to 98
*@n: inputted number
*
*Return: always 0 (success)
*/
void print_to_98(int n)
{

	int x, y;

	if (x <= 98)
	{
	for (x = n; x <= 98; x++)
	{
	if (x != 98)
		printf("%d, ", x);
	else if (x == 98)
		printf("%d\n", x);
	}
	}
	else if (x >= 98)
	{
	for (y = n; y >= 98; y++)
	{
	if (y != 98)
		printf("%d, ", y);
	else if (y == 98)
		printf("%d\n", y);
	}
	}
}


}
}
