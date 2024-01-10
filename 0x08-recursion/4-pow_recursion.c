#include <stdio.h>
/**
 * _pow_recursion - Calculates the value of x
 * to the power of y
 *
 * @x: Integer base
 * @y: Integer power
 * Return: The value of x raised to the powe of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
