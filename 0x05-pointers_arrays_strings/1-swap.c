#include "main.h"

/**
 * swap_int - swaps two integers
 * @a:first parameter
 * @b:second parameter
 *Return: Returns void
 */
void swap_int(int *a, int *b)
{
	*a = &a;
	*b = &b;
	int t;

	t = a;
	a = b;
	b = t;

	return;
}
