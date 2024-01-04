#include <stdio.h>
/**
 * string_toupper - Converts lower case letters to upper case letters
 *
 * @str: String pointer
 * Return: Characters.
 */
char string_toupper(char *str)
{
	char *str;
	char *original_str = str;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (original_str);
}
