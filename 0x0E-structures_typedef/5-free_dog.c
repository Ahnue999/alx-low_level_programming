#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the structure
 * Return: no return
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
