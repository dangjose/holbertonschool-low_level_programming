#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: String being reversed.
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;

	while (*s)
	{
		length++;
		s++;
	}
	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}
	_putchar('\n');
}
