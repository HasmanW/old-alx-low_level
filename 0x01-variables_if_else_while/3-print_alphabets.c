#include<stdio.h>

/**
 * main - Starts the program
 *
 * Return: Returns program output
*/
int main(void)
{
	int i;
	int t;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (t = 'A'; t <= 'Z'; t++)
	{
		putchar(t);
	}
	putchar ('\n');
	return (0);
}
