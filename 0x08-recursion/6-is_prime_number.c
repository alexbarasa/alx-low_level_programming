#include <stdio.h>
/**
 * is_prime_number - Checks if a given number is prime
 *
 * @n: Integer number to be checked
 * Return: 1 for prime and 0 for non prime numbers
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
