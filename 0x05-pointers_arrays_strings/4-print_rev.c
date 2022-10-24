#include "main.h"

/**
*print_rev - Print the elements of a string array in reverse
*@s: string to be printed
*Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = '\0'; s[i] != 0; 1++)
	{
		_putchar(s[i]);
	}

	_putchar ('\n');
}
