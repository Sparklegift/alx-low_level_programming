#include "3-calc.h"

/**
 * op_add - return sum of 2 numbers
 * @a: first num
 * @b: the second num
 * Return: sum
 */
int op_add(int a, int b)
{
	return(a + b);
}

/**
 * op_sub - return difference of teo numbers
 * @a: first num
 * @b: second num
 * Return: differnce
 */
int op_sub(int a, int b)
{
	return(a - b);
}

/**
 * op_mul - return product of two nums
 * @a: first num
 * @b: second num
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * );
}

/**
 * op_div - return result of division of 2 nums
 * @a: first num
 * @: secnd num
 * Return: result of divition
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -  remainder of the division
 * @a: first num
 * @b: second num
 * Return:  remainder of the division
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
