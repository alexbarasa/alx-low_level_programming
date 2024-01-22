#include <stdio.h>
int _strlen(char *s);
/**
 * init_dog - Initializes variables of struct dog
 *
 * @d: Struct dog Pointer
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);
	if (d->name == NULL || d->owner == NULL)
		exit(EXIT_FAILURE);
	_strcpy(d->name, name);
	d->age = age;
	_strcpy(d->owner, owner);
}
/**
 * _strlen - Calculates the length of a string
 *
 * @s: Character pointer
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * _strcpy - Copies a given number of characters into the given string
 *
 * @dest: Destination string
 * @src: Source string
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while ((*dest++ = *src++) != '\0')
		;
	return (originalDest);
}