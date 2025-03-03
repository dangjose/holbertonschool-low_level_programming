#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 *
 * @s: String in which character will be searched.
 * @c: Character to be searched.
 *
 * Return: Pointer if c is found, NULL if not, pointer to NULL if  '\0'
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
