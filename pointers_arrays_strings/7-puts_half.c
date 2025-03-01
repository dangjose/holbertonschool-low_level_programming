#include "main.h"

/**
 * puts_half - Prints half of string
 *
 * @str: String to be printed.
 *
 * Return: void
 */

void puts_half(char *str)
{
	int length = 0;
	int second_half;

	while (str[length])
	{
		length++;
	}
	if (length % 2 != 0)
		second_half = (length + 1) / 2;
	else
		second_half = length / 2;
	while (second_half < length)
	{
		_putchar(str[second_half]);
		second_half++;
	}
	_putchar('\n');
}
