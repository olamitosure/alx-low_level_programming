#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point code by Heph
* Description: This program prints all single digits number with comma
*Return: Always 0 (success)
*/

int main(void)
{
	int sd;

	for (sd = '0'; sd <= '9'; sd++)
		{
		putchar(sd + '0');
	if (sd < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
