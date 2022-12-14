#include <main.h>
/**
* print_alphabet_10 -> the lowercase
* Return: 0
*/

void print_alphabet_x10(void)
{
	char i;
	int x;

	for (i = '0'; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			putchar(x);
		}
		putchar('\n');
	}
}
