#include "main.h"
/**
 * sqrthelper - If n does not have a natural square root
 * @num: number
 * @sqrtn: square root of num
 * Return: -1
 */
int sqrthelper(int num, int sqrtn)
{
	if ((sqrtn * sqrtn) == num)
	{
		return (sqrtn);
	}else
	{
		if ((sqrtn * sqrtn) > num)
			return (-1);
		else
			return (sqrthelper(num, sqrtn + 1));
	}
}
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: number to find sqrt.
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrthelper(n, 0));
}
