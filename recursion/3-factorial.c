#include "main.h"

/**
 * factorial - Determines factorial of a given number.
 *
 * @n: Number to determine factorial for.
 *
 * Return: Factorial of n.
 */

int factorial(int n)
{
	int result;
	
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
	{
		result = (n * factorial(n - 1));
		return (result);
	}
}
