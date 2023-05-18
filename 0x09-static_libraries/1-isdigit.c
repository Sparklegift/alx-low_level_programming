#include "main.h"
/**
 * _isdigit -  checks for a digit (0 through 9)
 * @c: char to be checked
 * Return: 1 if c is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int a = 0;

	if (c >= '0' && c <= '9')
		a = 1;
	return (a);
}
