#include "main.h"
/**
*main - Entry point
* print alphabet in 10 lines -> the lowercase
*Return: 0
*/

int main(void)
{
	char i;
	int x;

	for (i = '0'; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	}
	_putchar('\n');
	return (0);
}
