/**
 * _isdigit - Checks the uppercase alphabets
 * @c: Integer
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int i;
	int j = '9';

	for (i = '0'; i <= j; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (-1);
}
