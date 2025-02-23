#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Checks if a character is lowercase or uppercase.
 *
 * @ch: The character to check.
 *
 * Return: 1 if letter, 0 if otherwise
 */

int _isalpha(int ch)
{
	if (isalpha(ch))
	{
		return (1);
	}
	return (0);
}
