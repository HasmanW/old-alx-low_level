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
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);

			if (a == 57 && b == 56)
			{
				break;
			}

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

