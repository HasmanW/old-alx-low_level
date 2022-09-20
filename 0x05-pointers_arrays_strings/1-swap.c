#include "main.h"

/**
 * swap_int - swaps two integers
 * @a:first parameter
 * @b:second parameter
 *Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int x;
	int &x;
	int y;
	int &y;
	int t;

	*x = &x;
	*y = &y;

	t = x;
	x = y;
	y = t;

	return;
}
