#include "main.h"

/**
*puts2 - Print the elements of a string in twos
*@str: string to be passed
*Return: void Always
*/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i + 1]);
	}

	_putchar ('\n');
}
