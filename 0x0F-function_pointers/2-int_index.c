#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: integers array
 * @size: elements in the array
 * @cmp: pointer to function that compares the integer
 * Return: index of element or -1 if not found or in case of error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i, resu;

    resu = -1;
    if (array && cmp)
    {
        if (size <= 0)
        {
            return resu; // Return -1 if the size is invalid (non-positive)
        }
        for (i = 0; i < size; i++)
        {
            if (cmp(array[i]) > 0)
            {
                resu = i;
                break;
            }
            else if (cmp(array[i]) < 0)
            {
                return resu; // Return -1 if there is an error in the comparison
            }
        }
    }
    return resu; // Return -1 if no element meets the comparison condition
}
