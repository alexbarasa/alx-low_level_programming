#include <stdio.h>
/**
 * cap_string - Converts lower case letters to upper case letters
 *
 * @str: String pointer
 * Return: Characters.
 */
char *cap_string(char *str)
{
	char *original_str = str;

	while (*str != '\0')
	{
		while (*str != '\0' && ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z')))
		{
			str++;
		}
		while (*str != '\0' && ((*str <= 'a' || *str >= 'z') && (*str <= 'A' || *str >= 'Z')))
		{
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
		}
		*str++;
	}
	return (original_str);
}
