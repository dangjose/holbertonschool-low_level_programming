/**
 * main - Entry point of the program
 *
 * Description: Print lowercase alphabet in reverse
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	char letter = 'z';

	while (letter > 'a' - 1)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
