#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parameter
 */
void rev_string(char *s)
{
	int i, len, half;
	char temp;

	half = len / 2;
	i = 0;

	for (len = 0; s[len] != '\0'; len++)
	;
	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[1] = temp;
		i++;
	}
}
