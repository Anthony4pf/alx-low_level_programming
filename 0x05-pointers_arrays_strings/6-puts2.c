#include "main.h"

/**
*puts2 - Print the elements of a string in twos
*@str: string to be passed
*Return: void Always
*/
void puts2(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		j = i + 1;
		_putchar(str[j]);
	}

	_putchar ('\n');
}
