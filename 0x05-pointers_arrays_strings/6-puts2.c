#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, li;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (li = 0; li < len; li += 2)
	{
		_putchar(strl[i]);
	}

	_putchar('\n');
}
