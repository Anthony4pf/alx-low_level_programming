#include "main.h"

/**
*more_numbers - print integers on fourteen lines
*
*Return: Always 0 (success)
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}

		_putchar('\n');
	}

	_putchar('\n');
}
