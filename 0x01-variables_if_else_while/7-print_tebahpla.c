#include <stdio.h>
#include <stdlib.h>
/**
*main - Entry point
*Hephcodes: Print alphabets in reverse order
*Return: Always 0 (success)
*/

int main(void)
{
	char subject;

	for (subject = 'z'; subject >= 'a'; subject--)
		{
		putchar(subject);
		}
	putchar('\n');
	return (0);
}
