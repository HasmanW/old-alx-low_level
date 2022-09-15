#include "main.h"

/**
 * print_times_table - Print the `n` times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: int type number
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
			int result = j * i;
			
			if (j == 0)
				{
					_putchar('0');
				} else if (result <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + result);
				} else if (result > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + (result % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
			}
			_putchar('\n');
		}
	}
}
