/**
 * _isupper - checks if a character is uppercase or not
 * @c: character to be tested
 * Return: returns 1 if upper, 0 if not
*/

int _isupper(int c)
{
	if ((c = 65) && (c <= 90))
	{
		return 1;
	}
	return 0;
}
