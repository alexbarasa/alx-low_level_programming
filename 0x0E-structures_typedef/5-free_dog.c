#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Clears the memory occupied by dog_t
 *
 * @d: Pointer to dog_t structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
	}
	free(d);
}
