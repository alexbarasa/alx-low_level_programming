#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - creates array of characters
 *
 * @size: Unsigned integer
 * @c: Character
 * Return: Null of size=0, or a pointer
 * to an array or NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
        unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}
	return (array);
}
