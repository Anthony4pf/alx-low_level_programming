#include "main.h"

/**
*print_line - print lines according to input integer
*@n: integer to be passed into the loop
*Return: Always 0 (success)
*/
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
