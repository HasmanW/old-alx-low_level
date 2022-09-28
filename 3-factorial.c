#include "main.h"

/**
 * factorial - gets the factorial of n
 *
 * @n: input parameter
 * Return: returns a value
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
