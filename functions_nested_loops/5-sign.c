#include "main.h"
/**
 * print_sign - Prints sign of a number
 *
 * @n: The number to check.
 *
 * Return: 1 n is greater than zero, 0 n is zero, -1 n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
