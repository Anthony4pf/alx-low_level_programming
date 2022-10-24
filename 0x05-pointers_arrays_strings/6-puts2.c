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
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar ('\n');
}
