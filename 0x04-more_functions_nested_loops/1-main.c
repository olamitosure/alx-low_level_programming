#include <stdio.h>
#include "main.h"
/**
 * main - check for the code
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = '0';
		printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
		printf("%c: %d\n", c, _isdigit(c));
		return (0);
}
