#include <stdio.h>
/**
* main - Entry point
* Description: this program prints a putchar
* Return: Always 0 (success)
*/

int main(void)
{
	int sub;

	for(sub = 'E'; sub <= 'Z'; sub++)
		putchar(sub);
	putchar('\n');
	return (0);
}
