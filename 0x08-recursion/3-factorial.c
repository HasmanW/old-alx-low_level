#include "main.h"

/**
 * factorial - gets the factorial of n
 *
 * @n: input parameter
 * Return: returns a value
*/
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 1)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
