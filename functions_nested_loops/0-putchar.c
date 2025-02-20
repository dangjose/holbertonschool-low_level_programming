/**
 * main - Entry point of the program
 *
 * Description: Prints to standard error.
 * Return: 1
 */
#include <unistd.h>
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
