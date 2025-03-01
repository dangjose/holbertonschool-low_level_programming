#include "main.h"

/**
 * puts2 - Prints every other char of str
 *
 * @str: String to be printed.
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
