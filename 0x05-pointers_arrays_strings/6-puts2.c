--#iinclude "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, s;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (s = 0; s < len; s += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
