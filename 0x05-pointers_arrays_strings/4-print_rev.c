#include "main.h"

/**
*print_rev - Print the elements of a string array in reverse
*@s: string to be printed
*Return: void
*/

void print_rev(char *s)
{
	int i;
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar ('\n');
}
