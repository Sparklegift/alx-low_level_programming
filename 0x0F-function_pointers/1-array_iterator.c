#include <stdio.h>
/**
 * array_iterator - function that executes a function
 * @array: arry of elements
 * @size: array size
 * @action: pointer fuction
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
