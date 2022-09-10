#include<stdio.h>
#include<string.h>

/**
 * main - Starts the program
 *
 * Return - Returns main output
*/
int main(void)
{
	char str [] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	char* p = strtok (str, ", ");
	printf("%s", p);
	p = strtok(NULL, ", ");
	return (0);

}
