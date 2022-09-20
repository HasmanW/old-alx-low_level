#include "main.h"

/**
 * _put - print a string
 * @str: string input
 */
void _puts(char *str)
{
	int i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	putchar("\n");
}
