#include "main.h"

/**
*print_last_digit - check number and print the last digit
*
*@n: the number to be checked
*
*Return: Always 0 (success)
*/
int print_last_digit(int n)
{
int last_digit;

	if (n < 0)
	{
		last_digit = (-1 * (n % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (n % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}
}
