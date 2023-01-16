#include "main.h"

/**
*_puts - Print a string to stdout
*@str: string to be printed to stdout
*Return: Void Always
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar ('\n');
}
