#include "main.h"

/**
 * *leet - Encodes a string into 1337.
 *
 * @str: String to be encoded.
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	int i, j;
	char normal[] = "aAeEoOtTlL";
	char leet[]   = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (str[i] == normal[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
