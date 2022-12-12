#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* hephcode: print all numbers of base 16 in lowercase
* Return: Always 0 (success)
*/

int main(void)
{
	char distribution;

	int num;

	for (num = 0; num < 10; num++)
		{
		putchar(num + '0');
		}
	for (distribution = 'a'; distribution <= 'f'; distribution++)
		{
		putchar(distribution);
		}
	putchar('\n');
	return (0);
}
