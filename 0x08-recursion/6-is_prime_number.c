#include "main.h"
/**
 * primehelper - returns 0 or 1
 * @num: mumber
 * @i: factor of num
 * Return: 0 if not prime, 1 if prime
 */
int primehelper(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (primehelper(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - if number is prime or not
 * @n: number
 * Return: 1 if number is prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (primehelper(n, 2));
	}
}
