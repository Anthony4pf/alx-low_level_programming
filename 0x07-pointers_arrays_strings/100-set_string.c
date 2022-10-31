#include "main.h"

/**
*set_string - Sets the value of a pointer to a char
*@s: Pointer to another pointer
*@to: the pointer
*Return: void
*/

void set_string(char **s, char *to)
{
	s = &to;
