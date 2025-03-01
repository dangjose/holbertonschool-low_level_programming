#include "main.h"

/**
 * print_triangle - Prints triangle
 *
 * @size: The size of the triangle.
 *
 * Return: void
 */

void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size <= 0)
		_putchar('\n');
	else
	{
		row = 1;
		while (row <= size)
		{
			for (space = size - row; space > 0; space--)
				_putchar(' ');
			for (hash = 1; hash <= row; hash++)
				_putchar('#');
			_putchar('\n');
			row++;
		}
	}
}
