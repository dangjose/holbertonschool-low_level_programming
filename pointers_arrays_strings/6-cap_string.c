#include "main.h"

/**
 * *cap_string - Capitalises all words of a string.
 *
 * @str: String to be converted.
 *
 * Return: Capitalised string
 */

char *cap_string(char *str)
{
	int cap_next = 1;
	int i, j;

	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (cap_next)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			cap_next = 0;
		}
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				cap_next = 1;
				break;
			}
		}
	}
	return (str);
}
