#include<stdio.h>

/**
 * main - prints a combination of two numbers
 *
 * Return: returns true
 */
int main(void)
{
	/*declare variables*/
	int a, b;

	/*print the integers*/
	for (a = 48; a < 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

