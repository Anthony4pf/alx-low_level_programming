#include <stdio.h>
#include <stdlib.h>

/**
*print_name - print the name of a person according to specified function
*@name: name to print
*@f: pointer to function
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
