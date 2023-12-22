/**
 * print_square - Prints the square
 * @size: Size of the square
 * Return: None
 */
void print_square(int size)
{
	int i, j, k;

	j = size;
	for (i = 0; i < j; i++)
	{
		for (k = 0; k < j; k++)
		{

			putchar('#');
		}
		putchar('\n');
	}
}
