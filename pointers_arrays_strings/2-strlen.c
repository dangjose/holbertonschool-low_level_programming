#include "main.h"

/**
 * _strlen - Obtains length of string.
 *
 * @s: String in which length is being determined.
 *
 * Return: Length of s.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
