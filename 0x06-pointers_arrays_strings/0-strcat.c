char *_strcat(char *dest, char *src)
{
	*dest = &dest;
	*src = &src;
	char *s = *dest + *src;
	return s;
}
