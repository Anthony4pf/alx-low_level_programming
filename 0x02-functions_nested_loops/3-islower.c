#include "main.h"

/**
*_islower - check if numbers is lowercase
*@c: letter being tested
*Return: 1 if lowercase, return 0 if otherwise
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	return (1);

	else
	return (0);
}
