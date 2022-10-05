#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create a array object
 *
 * @size: First parameter
 * @c: Second parameter
 * Return: returns an array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * (sizeof(c)));

	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}
	return (s);;

}
