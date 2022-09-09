#include<stdio.h>

/**
 * main - Starts the program
 *
 * Return: Returns main program output
*/
int main(void)
{
	int n;
	int k = n % 10;

	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, k);
	}
	else if (k < 6 && k != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0");
	}
	return (0);
}

