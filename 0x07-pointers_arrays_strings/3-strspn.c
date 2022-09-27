#include "main.h"
#include <string.h>
/**
 * _strspn - gets the lengthe of a prefix substring
 * @s: staring parameter
 * @accept: checked against string
 * Return: returns number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int p;

	p = strspn(s, accept);
	return (p);
}
