#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line
 * @str: string
 * Return: print
 */
void puts_half(char *str)
{
	int ln = 0;

	while (*str != '\0')
	{
		ln++;
		str++;
	}

	str -= (ln / 2);
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
