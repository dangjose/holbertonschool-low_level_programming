#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: Denotes input
 *
 * Return: Value of last digit.
 */

int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
		d = -d;
	}
	_putchar(d + '0');
	return (d);
}
