#include "main.h"

/**
 * _pow_recursion - Calculates value x raised to power y.
 *
 * @x: Value
 * @y: Power
 *
 * Return: Result of calculation.
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	result = (x * _pow_recursion(x, (y - 1)));
	return (result);
}
