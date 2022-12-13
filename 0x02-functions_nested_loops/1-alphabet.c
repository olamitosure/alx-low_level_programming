#include "main.h"
/**
* main - Entry point
* Description: print all the alphabet in lower case
* Return: Always 0 (success)
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
			c++;
	}
	putchar('\n');
	return (0);
}
