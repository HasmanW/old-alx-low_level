#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string of 0s and 1s
 * Return: returns the converted unsigned int or 0 if
 *         there is one or more char in string b that is not 0 or 1
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/*declaration and initialization of variables*/
unsigned int decimal = 0;
int str_len = 0, base = 1;

if (!check_valid_string(b))
return (0);

while (b[str_len] != '\0')
str_len++;

while (str_len)
{
decimal += ((b[str_len - 1] - '0') * base);
base *= 2;
str_len--;
}
return (decimal);
}

/**
 * check_string - checks if string provided is valid
 * @b: strings of 0s and 1s
 * Return: returns true or false
 */
int check_valid_string(const char *b)
{
if (b == NULL)
return (0);

while (*b)
{
if (*b != '1' && *b != '0')
return (0);
b++;
}
return (1);
}
