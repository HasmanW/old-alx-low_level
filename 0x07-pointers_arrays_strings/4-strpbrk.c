#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches a string for any of the set bytes
 * @s: string parameter
 * @accept: second parameter to check against
 * Return: Returns a string
 */

char *_strpbrk(char *s, char *accept)
{
	char *p = strpbrk(s, accept);

	return (p);
}
