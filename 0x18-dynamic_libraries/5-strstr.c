#include <stdio.h>
/**
 * *_strstr - Finds the first occurence of a substring
 *
 * @haystack: The main string pointer
 * @needle: The substring pointer
 * Return: The pointer to the begining of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
