#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point code by Heph
* Description: This program prints all single digits number with comma
* return: This program returns 0 as success
*/

int main(void)
{
	char sd;

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
