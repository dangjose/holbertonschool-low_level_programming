#include "main.h"

/**
 * reverse_array - Reverses content of an array of integers.
 *
 * @a: Array to be reversed.
 * @n: Number of elements in the array.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int tmp, *end;

	end = a + n - 1;

	while (a < end)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		a++;
		end--;
	}
}
