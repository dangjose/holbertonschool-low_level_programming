#include <stdio.h>

/**
 * main - Program that prints all arguments it receives.
 *
 * @argc: Argument count
 * @argv: Argument vector (array of strings)
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
