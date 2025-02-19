/**
 * main - Entry point of the program
 *
 * Description: Print single digit numbers of base 10
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
	putchar('\n');
	return (0);
}
