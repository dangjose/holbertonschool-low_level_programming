/**
 * main - Entry point of the program
 *
 * Description: Print numbers of base 16 in lowercase
 * Return: 0
 */
#include <stdio.h>

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	for (num = 97; num < 103; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
