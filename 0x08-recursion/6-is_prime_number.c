#include "main.h"

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
	{
		return (1);
	}
	else if ((6 * n + 1) == 0 || ((6 * n) + 1) == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
