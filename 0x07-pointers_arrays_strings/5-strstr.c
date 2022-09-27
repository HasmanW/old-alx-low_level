#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: First parameter
 * @needle: Second parameter
 * Return: returns a char *
 */

char *_strstr(char *haystack, char *needle)
{
	char *p = strstr(haystack, needle);
	return (p);
}
