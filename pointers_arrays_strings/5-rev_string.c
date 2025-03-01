#include "main.h"

/**
 * rev_string - Reverses string.
 *
 * @s: String to be reversed.
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length = 0;
	char *end, tmp;

	while (s[length])
	{
		length++;
	}

	end = s + length - 1;

	while (s < end)
	{
		tmp = *s;
		*s = *end;
		*end = tmp;
		s++;
		end--;
	}
}
