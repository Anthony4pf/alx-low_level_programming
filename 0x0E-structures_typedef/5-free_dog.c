#include <stdlib.h>
#include "dog.h"

/**
*free_dog - free allocated memory
*@d: pointer to dog
*Return: void
*/

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
		free(d);
		free((*d).name);
		free((*d).owner);
	}
}
