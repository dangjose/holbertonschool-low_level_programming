/**
 * main - Entry point of the program
 *
 * Description: Prints to standard error.
 * Return: 1
 */
#include <unistd.h>
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}

