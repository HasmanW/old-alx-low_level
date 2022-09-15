#include "main.h"
/**
 * main - Starts the program
 *
 * Return: Returns true 
*/

int main(void)
{
	print_alphabet();
	return 0;
}

void print_alphabet(void)

{
	for (int i = 97; i <=122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

