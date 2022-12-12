#include <stdio.h>
#include <unistd.h>
/**
*main - Entry point
*Description: prints three digits combination
*Return: Always 0 (success)
*/

int main(void)
{
	int j, k, l;

	for (j = '0'; j <= '9'; j++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{
				if (!((j != k) || (k != l) || (k > j) || (l > j)))
				{
					putchar(j);
					putchar(k);
					putchar(l);
					if (j != '8' || (j == '8' && k != '9' && l != 7))
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
