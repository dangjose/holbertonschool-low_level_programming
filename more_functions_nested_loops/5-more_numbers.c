#include "main.h"

/**
 * more_numbers - Print 1-14 10 times.
 *
 * Return: void
 */

void more_numbers(void)
{
	int c = 0;
	int time = 0;

	while (time < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar('1');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		time++;
	}
}
