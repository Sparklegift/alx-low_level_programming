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
    if (array == NULL || cmp == NULL || size <= 0)
    {
        return (resu);
    }
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]) != 0)
        {
            return (i);
        }
    }
    return (resu);
}
