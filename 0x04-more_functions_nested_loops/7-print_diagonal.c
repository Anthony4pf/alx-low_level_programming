#include "main.h"

/**
*print_diagonal - Print diagonal line dependent on the integer n.
*@n : The number of lines using '\' characters to use
*Return: Void.
*/
void print_diagonal(int n)
{

	int i;
	int s;

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');

		_putchar('\n');
	}

	_putchar('\n');

}

