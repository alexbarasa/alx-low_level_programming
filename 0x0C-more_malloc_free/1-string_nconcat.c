#include <stdio.h>
#include <stdlib.h>
int _strlen(char *s);
/**
 * *string_nconcat - Concatinates n bytes of s2 to s1
 *
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Unsigned integer
 * Return: Pointer to the concatinated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	result = malloc((len1 + n +1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		result[i] = s2[j];
	result[i] = '\0';
	return (result);
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
