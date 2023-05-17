#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: input
 * Return: s in reverse
 */
void rev_string(char *s)
{
	char rs = s[0];
	int n = 0;
	int j;

	while (s[n] != '\0')
		n++;
	for (j = 0; j < n; j++)
	{
		n--;
		rs  = s[j];
		s[j] = s[n];
		s[n] = rs;
	}
}
