#include <stdio.h>
#include <stdlib.h>
char *_strncpy(char *dest, char *src, int n);
int count_words(char *s);
int is_space(char c);
/**
 *strtow - Splits a string into words
 *
 * @str: String pointer
 * Return: Splited words or NULL
 */
char **strtow(char *str)
{
	char **words;
	int word_index, word_length, i, in_word, num_words;

	word_index = word_length = in_word = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (i = 0; i < word_index; i++)
					{
						free(words[i]);
					}
					free(words);
					return (NULL);
				}
				_strncpy(words[word_index], str - word_length, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
			}
		}
		else
		{
			in_word = 1;
			word_length++;
		}
		str++;
	}
	words[num_words] = NULL;
	return (words);
}
/**
 * _strncpy - Copies a given number of characters into the given string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Integer
 * Return: Copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (*dest != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		n--;
	}
	return (original_dest);
}
/**
 * is_space - Checks for new lines and spaces
 *
 * @c: Character
 * Return: Empty character, tab, new line
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}
/**
 * count_words - Counts words in a given string
 *
 * @s: String pointer
 * Return: The number of words in a string
 */
int count_words(char *s)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (is_space(*s))
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}
