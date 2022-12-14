#include "main.h"

/**
 * print_sign - Prints the sign of a num.
 * @n: The num the sign will be printed.
 *
 * Return: 1 if the num is greater than zero,
 *         0 if the num is zero,
 *        -1 if the num is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
