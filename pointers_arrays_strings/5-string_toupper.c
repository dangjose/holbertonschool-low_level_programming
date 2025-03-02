#include "main.h"

/**
 * *string_toupper - Change all lowercase letters to uppercase.
 *
 * @str: String to be converted.
 *
 * Return: void.
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32;
		ptr++;
	}
	return (str);
}
