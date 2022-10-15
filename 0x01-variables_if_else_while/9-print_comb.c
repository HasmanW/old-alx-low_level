#include<stdio.h>

/**
 * main - single digit numbers seperated with a comma
 *
 * Return: returns true
 */
int main(void)
{
/*variable declaration*/
int n;

/*code to print numbers*/
for (n = 48; n <= 57; n++)
{
putchar(n);

if (n != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

