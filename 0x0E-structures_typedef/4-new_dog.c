#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
/**
 * *new_dog - Creates the new dog
 *
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
/**
 * *_strdup - Duplicates a given string
 *
 * @str: Charater pointer
 * Return: Duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);
	duplicate = (char *)malloc(_strlen(str) + 1);
	if (duplicate == NULL)
		return (NULL);
	_strcpy(duplicate, str);
	return (duplicate);
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
