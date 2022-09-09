#include<stdio.h>

/**
 * main - Starts the program
 *
 * Return: Returns main programs value
*/

int main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
