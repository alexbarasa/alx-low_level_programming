#include <stdio.h>
/**
 * _atoi - Converts any integer to absolute integer.
 *
 * @s: Character pointer
 * Return: Absolute integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (result >= '0' && result <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	return (result * sign);
}
