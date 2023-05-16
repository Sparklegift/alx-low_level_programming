#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;
	if (argc > 1)
	{

		for (i = 1; i < argc; i++)
		{
			int k;
			char *str;

			str = argv[i];
			for (k = 0; str[k] != "\0"; k++)
			{
				if (str[k] < 48 || str[k] > 57)
				{
				printf("Error\n");
				return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
