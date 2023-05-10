#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @accept: searching string
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (j);
}
