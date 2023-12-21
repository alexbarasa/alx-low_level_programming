#include "main.h"
/**
 * _isupper - Checks the uppercase alphabets
 * @c: Integer
 * Return: 1 or 0
 */
int _isupper(int c)
{
	int i;
	int j = 'Z';

	for (i = 'A'; i <= j; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
