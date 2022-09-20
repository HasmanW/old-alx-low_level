#include "main.h"

/**
 * swap_int - swaps two integers
 * @a:first parameter
 * @b:second parameter
 *Return: Returns void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
