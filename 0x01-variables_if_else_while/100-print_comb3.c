#include <stdio.h>
/**
 * main - void
 * Return: 0
 */
int main(void)
{
	int num1, num2;
	/*ASCII code for 0*/

	for (num1 = 48; num1 < 58; num1++)

	{

		for (num2 = 49; num2 < 58; num2++)

		{
			if (num1 != num2 && num2 > num1)
			{
				putchar(num1);
				putchar(num2);
				if (num1 < 56)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
