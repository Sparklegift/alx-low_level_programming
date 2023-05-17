#include "main.h"
/**
 * _strcmp -  compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: difference btw s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int j;

	j = 0;
	while (s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
		{
			return (s1[j] - s2[j]);
		}
	j++;
	}
	return (0);
}
