#include "main.h"
#include <stdlib.h>
/**
 * wordnum - counts num of words
 * @s: string pointer
 * Return: num of words
 */
int wordnum(char *s)
{
	int f, c, w;

	f = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - splits a string into words.
 * @str: string
 * Return: Success or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, leng = 0, word, c = 0, start, end;

	while (*(str + leng))
		leng++;
	word = wordnum(str);
	if (word == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (word + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= leng; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = 1;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					**tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;
	return (matrix);
}
