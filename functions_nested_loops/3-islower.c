#include "main.h"
#include <ctype.h>
/**
 * _islower - Checks if a character is lowercase.
 *
 * @ch: The character to check.
 *
 * Return: 1 if lower, 0 if otherwise
 */

int _islower(int ch)
{
	if (islower(ch))
	{
		return (1);
	}
	return (0);
}
