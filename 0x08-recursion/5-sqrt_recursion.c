#include <stdio.h>
int test(int n, int guess);
/**
 * _sqrt_recursion - Calculates the square root of
 * a given number.
 *
 * @n: Integer
 * Return: Calculated square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (test(n, 1));
}
/**
 * test - Checks if a number is a perfect square
 * and calculates the square root of the number
 *
 * @n: Integer
 * @guess: Integer
 * Return: Square root
 */
int test(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (test(n, guess + 1));
}
