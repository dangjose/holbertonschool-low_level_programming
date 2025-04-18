#include "main.h"

/**
 * _strcmp - Compares 2 strings.
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Difference between first pair of differing chars.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);

}
