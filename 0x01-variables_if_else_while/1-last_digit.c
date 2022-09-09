#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Starts the program
 *
 * Return: Returns main program output
*/
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = (n % 10);
	if (n <= 9 && 1 >= n && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}

	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	}
	else if (k == 0 || n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
