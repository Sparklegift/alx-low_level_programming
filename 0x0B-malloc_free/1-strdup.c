#include "main.h"
#include <stdlib.h>
/**
 * _strdup - eturns a pointer to a newly allocated space in memory
 * @str: pointer to string
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int leng, i;

	if (str == NULL)
	{
		return (NULL);
	}
	leng = 0;
	while (str[leng] != '\0')
	{
		leng++;
	}
	nstr = malloc(sizeof(char) * (leng + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < leng; i++)
	{
		nstr[i] = str[i];
	}
	nstr[leng] = '\0';
	return (nstr);
}
