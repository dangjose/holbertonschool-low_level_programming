#include "main.h"

/**
 * _sqrt_helper - Helper function to find the square root recursively.
 *
 * @n: The number to find the square root of.
 * @i: The current integer for the square root.
 *
 * Return: The natural square root of n, otherwise -1.
 */

int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Calculates natural square root of a number.
 *
 * @n: Number.
 *
 * Return: Result of calculation.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
