#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: integers array
 * @size: elements in the array
 * @cmp: pointer to fuction
 * Return: index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, resu;

	resu = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (resu);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if(cmp(array[i]) > 0)
			{
				resu = i;
				break;
			}
			if ((cmp(array[i]) -- (-1)))
			{
				return (resu);
			}
		}
	}
}

