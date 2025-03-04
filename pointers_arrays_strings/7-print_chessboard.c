#include "main.h"
#include <stddef.h>

/**
 * print_chessboard - Prints the chessboard.
 *
 * @a: Denotes chess board.
 *
 * Return - void.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;
	int rows = sizeof(a) / sizeof(*a[8]);

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
