@@ -1, 4 + 1, 4 @@
include "main.h"
#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
	int o = 0;

	while (str[o] != '\0')
	{
		_putchar(str[o]);
		i++;
	}
	_putchar('\n');
}
