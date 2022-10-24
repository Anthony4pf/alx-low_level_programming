#include "main.h"

/**
*print_rev - Print the elements of a string array in reverse
*@s: string to be printed
*Return: void
*/

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar ('\n');
}
