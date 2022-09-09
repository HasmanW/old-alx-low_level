#include<stdio.h>
#include<stdlib.h>
#include<math.h>
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
	while (n == 1,2,3,4,5,6,7,8,9 && k < 6)
	{
		printf("Last digit of %d is %d and %d is less than 6 and not 0\n", n, k, k);
		return 0;
	}

	if (k > 5)
	{
		printf("Last digit of %d is %d and %d is greater than 5\n", n, k, k);
	}
	else if (k == 0 || n == 0)
	{
		printf("The last digit of %d is 0 and is 0\n", n);
	} 
	return (0);
}
