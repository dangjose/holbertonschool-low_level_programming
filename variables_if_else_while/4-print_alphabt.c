/**
 * main - Entry point of the program
 *
 * Description: Print alphabet in lowercase except q and e
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	char last_letter = 'z';
	char letter = 'a';

	while (letter < last_letter + 1)
	{
		if (letter == 'e' || letter == 'q')
		{
			letter++;
			continue;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}
