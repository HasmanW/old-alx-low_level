#include "main.h"
#include <string.h>
/**
 * _memcpy - copies memory area
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 * Return: returns a string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = memcpy(dest, src, n);

	return (p);
}
