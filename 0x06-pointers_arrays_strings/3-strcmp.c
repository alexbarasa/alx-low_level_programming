#include <stdio.h>
/**
 * _strcmp - Compares two strings
 *
 * @s1: Character pointer
 * @s2: Character point
 * Return: The string diference
 */
int _strcmp(char *s1, char *s2)
{
	int diff;

	while (*s1 != '\0' && s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	diff = (int)(*s1) - (int)(*s2);
	return (diff);
}
