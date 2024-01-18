#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - Reallocates the memory block using malloc and free
 *
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the previous memory block in bytes
 * @new_size: size of the new memory block
 * Return: None
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i, min_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (old_size < new_size)
		min_size = old_size;
	else
		min_size = new_size;
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	for (i = 0; i < min_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	free(ptr);
	return (new_ptr);
}
