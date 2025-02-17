/**
 * main - Entry point of the program
 *
 * Description: Prints to standard error.
 * Return: 1
 */
#include <unistd.h>

int main(void)
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

    write(2, message, 59);  

    return 1;
}

