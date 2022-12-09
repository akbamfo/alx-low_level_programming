#include <stdio.h>
#include <unistd.h>
/**
 * main - print a C program followed by a new line tp the standard error
 * Return:1
 * *
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korper, 2015-10-19\n", 59);
	return (1);
}
