#include "main.h"
#include <string.h>

/**
 * _strchr - Locates a character in a string
 * @s: string parameter
 * @c: character in string to be located
 * Return: returns a string
*/
char *_strchr(char *s, char c)
{
	char *p;

	p = strchr(s, c);
	
	s = p;
	return(s);
}
