#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 * Prototype: void print_alphabet(void);
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'b')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
