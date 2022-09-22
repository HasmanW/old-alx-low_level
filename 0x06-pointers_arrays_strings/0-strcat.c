#include "main.h"

/**
 * *_strcat - concatenates two strings 
 * @*dest: destination variable
 * @*src: source variable
 * Return: returns the string
 */
char *_strcat(char *dest, char *src)
{
	*dest = &dest;
	*src = &src;
	char *s = *dest + *src;
	return s;
}
