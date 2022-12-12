#include <stdio.h>
/**
* main - Entry point
* Description: This program prints possible combinations of two-digit numbers
*Return: Always 0 (success)
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 > num2 && num2 == '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
