#include <stdio.h>
int test(int n);
/**
 * _sqrt_recursion - Calculates the square root of
 * a given number.
 *
 * @n: Integer
 * Return: Calculated square root
 */
int _sqrt_recursion(int n)
{
	int i;
	int k = n;
	int j = test(k);

	i = 1;
	if (j == -1)
		return (-1);
	else if (n == 1)
		return (1);
	else if (j == 1 && n - i >= 0)
	{
		return (1 + _sqrt_recursion(n - i), i += 2);
	}
	else
		return (0);
}
int test(int n)
{
        int i;

        i = 1;
        while ( n > 0)
        {
                n -= i;
                i += 2;
        }
        if (n == 0)
                return (1);
        else
                return (-1);
}
