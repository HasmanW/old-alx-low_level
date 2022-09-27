#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - sum of two diagonals of a square matrix of integers
 *
 * @a: first parameter
 * @size: second parameter
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%i, %i\n", s1, s2);
}
