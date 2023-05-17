#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *  str_concat - concatenates two strings.
 *  @s1: pointer to string 1
 *  @s2: pointer to string 2
 *  Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int l1, l2, size, i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;
	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	size = l1 + l2;

	nstr = malloc((sizeof(char) * size) + 1);
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
