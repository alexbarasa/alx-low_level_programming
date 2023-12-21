#include "main.h"

int abs(int x);
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (abs(a) >= abs(b) && abs(b) >= abs(c))
	{
		largest = a;
	}
	else if (abs(b) >= abs(a) && abs(a) >= abs(c))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
/**
 * abs - Returns the absolute value of a number
 * @x: Integer
 * Return: Absolute value of x
 */
int abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
