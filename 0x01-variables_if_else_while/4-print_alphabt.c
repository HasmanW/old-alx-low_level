#include<stdio.h>

/**
 * main - Starts the program
 *
 * Return: Returns program output
*/
int main(void)
{
	int i;
	int e = 'e';
	int q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == e || i == q)
		{
			continue;
		}
		putchar(i);
	}
	putchar ('\n');
	return (0);
}
