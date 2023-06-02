#include <stdlib.h>
#include "main.h"
/**
 * _strleng - return string length
 * @s: string
 * Return: string length
 */
int _strleng(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int numb, leng, i, j;

	numb = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (numb < 0)
		return (NULL);
	if (numb >= _strleng(s2))
		numb = _strleng(s2);

	leng = _strleng(s1) + numb + 1;

	ptr = malloc(sizeof(char) * leng);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < numb; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
