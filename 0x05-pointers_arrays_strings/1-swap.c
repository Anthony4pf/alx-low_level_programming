#include "main.h"

/**
*swap_int - swap the values of two integers
*@a: the first number to be swapped
*@b: the first number to be swapped
*Return: Always 0;
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;

	*a = *b;

	*b = i;
}
