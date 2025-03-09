#include "main.h"

/**
 * _strlen_recursion - Determines lenght of string.
 *
 * @s: String in which length will be obtained.
 *
 * Return: Length of string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
