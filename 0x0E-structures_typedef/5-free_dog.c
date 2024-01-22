#include <stdio.h>
#include <stdlin.h>
#include "dog.h"
/**
 * free_dog - Clears the memory occupied by dog_t
 *
 * @d: Pointer to dog_t structure
 * @Return: None
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
