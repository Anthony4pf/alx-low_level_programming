#include "main.h"

/**
*print_square - Print square dependent on passed integer
*@n : The number of lines using '#' characters to use per row and column
*Return: Void.
*/
void print_square(int n)
{
	int a;

	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
