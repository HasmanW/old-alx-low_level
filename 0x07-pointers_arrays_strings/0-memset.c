#include "main.h"
#include <string.h>

/**
 * _memset - a function that fills memory with a constant byte
 * @s: first parameter
 * @b: second parameter
 * @n: third parameter
 * Return: returns a string
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	char *p =  memset(s, b, n);

	return (p);
}
