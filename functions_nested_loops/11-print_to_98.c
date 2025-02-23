#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */

void print_to_98(int n)
{
	int temp, digit;

	while (n != 98)
	{
		if (n < 0)
		{
			_putchar('-');
			temp = -n;
		}
		else
		{
			temp = n;
		}

		if (temp / 10)
		{
			digit = temp / 10;
			if (digit / 10)
				_putchar((digit / 10) + '0');
			_putchar((digit % 10) + '0');
		}
		_putchar((temp % 10) + '0');

		_putchar(',');
		_putchar(' ');

		n = (n < 98) ? (n + 1) : (n - 1);
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
