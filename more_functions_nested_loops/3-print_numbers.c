#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c = '0';

	while (c <= 57)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
