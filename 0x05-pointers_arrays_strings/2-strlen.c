@@ (-0, 0 + 1, 16) @@
#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description: return the length of a string
 * Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
