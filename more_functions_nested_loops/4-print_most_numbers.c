#include "main.h"

/**
 * print_most_numbers - Print numbers 0 - 9 except 2 & 4.
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
			c++;
		}
		else
			c++;
	}
	_putchar('\n');
}
