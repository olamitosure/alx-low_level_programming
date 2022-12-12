#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Description: prints three digits combination
*Return: Always 0 (success)
*/

int main(void)
{
	int j, k;

	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			if (j < k)
			{
				putchar(j);
				putchar(k);
				if (j != '8' || (j == '8' && k != '9'))
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
