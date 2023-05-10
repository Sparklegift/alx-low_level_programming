#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: source string
 * @c: character to search
 * Return: new string.
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
