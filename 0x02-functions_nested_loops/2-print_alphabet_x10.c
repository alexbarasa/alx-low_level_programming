/**
 * print_alphabet_x10 - Prints alphabets x10
 *
 * Return: No value.
 */
void print_alphabet_x10(void)
{
	int i, k;
	int j = 'z';
	int k = 0;
	l = 10;
	while (k < 10)
	{
		for (i = 'a'; i <= j; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
