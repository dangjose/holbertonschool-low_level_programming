#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of two diagonals of square matrix of int.
 *
 * @a: Denotes matrix
 * @size: Size of matrix.
 *
 * Return - void.
 */

void print_diagsums(int *a, int size)
{
	int row = 0;
	int sum_1 = 0;
	int sum_2 = 0;

	for (row = 0; row < size; row++)
	{
		sum_1 += a[row * size + row];
		sum_2 += a[row * size + (size - 1 - row)];
	}
	printf("%d, %d\n", sum_1, sum_2);
}

/*
 * Understanding the index calculations:
 *
 * A `size × size` 2D matrix stored in a 1D array follows row-major order.
 * The index of an element at row `r` and column `c` is:
 * Index = (r * size) + c
 *
 * 1. **Primary Diagonal (Top-Left to Bottom-Right)**
 *   - Formula: (r * size + r)
 *
 * 2. **Secondary Diagonal (Top-Right to Bottom-Left)**
 *   - These elements follow the pattern where row + column = size - 1.
 *   - Rearranging: c = (size - 1 - r)
 *   - Formula: (r * size + (size - 1 - r))
 */
