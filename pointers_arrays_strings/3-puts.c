#include "main.h"

/**
 * _puts - Prints string to stout.
 *
 * @str: String in which to print.
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
