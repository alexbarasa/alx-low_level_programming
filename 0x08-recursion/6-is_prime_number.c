#include <stdio.h>
int isPrime(int num, int divisor);
/**
 * is_prime_number - Checks if a given number is prime
 *
 * @n: Integer number to be checked
 * Return: 1 for prime and 0 for non prime numbers
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(isPrime(n, 2));
}
int isPrime(int num, int divisor)
{
	if (divisor * divisor > num)
		return (1);
	if (num % divisor == 0)
		return (0);
	else
		return (isPrime(num, divisor + 1));
}
