#include "main.h"
/**
 * print alphabets in lowercase followed by a new line
 *
*/
void print_alphabet(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
		_putchar(let);

	_putchar('\n');
}
