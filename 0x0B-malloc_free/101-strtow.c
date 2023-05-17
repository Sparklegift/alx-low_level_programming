#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
    {
	    return NULL;
    }

	int wordc = 0;
	int inword = 0;
	char *p = str;

	while (*p != '\0')
	{
		if (*p == ' ')
		{
			inword = 0;
		}
		else if (inword == 0)
		{
			inword = 1;
			wordc++;
		}
		p++;
	}

	char **words = (char **)malloc((wordc + 1) * sizeof(char *));
	if (words == NULL)
	{
		return NULL;
	}

	int wordi = 0;
	char *word_s = str;
	inword = 0;
	p = str;

	while (*p != '\0')
	{
		if (*p == ' ')
		{
			if (inword)
			{
				int wordl = p - word_s;
				words[wordi] = (char *)malloc((wordl + 1) * sizeof(char));
				if (words[wordi] == NULL)
				{
					for (int i = 0; i < wordi; i++)
					{
						free(words[i]);
					}
					free(words);
					return NULL;
				}
				strncpy(words[wordi], word_s, wordl);
				words[wordi][wordl] = '\0';
				wordix++;
				inword = 0;
			}
		}
		else if (inword == 0)
		{
			inword = 1;
			words = p;
		}
		p++;
	}
	if (inword)
	{
		int wordl = p - word_s;
		words[wordi] = (char *)malloc((wordl + 1) * sizeof(char));
		if (words[wordi] == NULL)
		{
			for (int i = 0; i <= wordi; i++)
			{
				free(words[i]);
			}
			free(words);
			return NULL;
		}
		strncpy(words[wordi], word_s, wordl);
		words[wordi][word_length] = '\0';
		wordi++;
	}
	words[wordi] = NULL;  // Set the last element of the array to NULL
	return words;
}

int main()
{
	char str[];
	char **words = strtow(str);

	if (words != NULL) 
	{
		int i = 0;
		while (words[i] != NULL)
		{
			printf("%s\n", words[i]);
			free(words[i]);
			i++;
		}
		free(words);
	}
	return 0;
}
