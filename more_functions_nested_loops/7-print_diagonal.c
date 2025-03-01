#include "main.h"

/**
 * print_diagonal - Draws a diagonal line.
 *
 * @n: Denotes the number of times the character '\' should be printed.
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int column;
	int row;

	if (n <= 0)
		_putchar('\n');
	else
	{
		column = 0;
		while (column < n)
		{
			row = 0;
			while (row < column)
			{
				_putchar(' ');
				row++;
			}
			_putchar('\\');
			_putchar('\n');
			column++;
		}
	}
}
