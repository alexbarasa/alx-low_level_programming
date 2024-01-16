#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - Concates all the arguments
 *
 * @ac: Argument count
 * @av: Argument vector
 * Return: A pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
	int length, i, index;
	char *arg, *result;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			length++;
			arg++;
		}
		length++;
	}
	result = (char *)malloc(length + 1);
	if (result == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg = av[i];
		while (*arg)
		{
			result[index++] = *arg++;
		}
		result[index++] = '\n';
	}
	result[index] = '\0';
	return (result);
}
