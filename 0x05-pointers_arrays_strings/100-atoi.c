#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	q = 0;
	n = 0;
	len = 0;
	j = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && j == 0)
	{
		if (s[i] == '-')
			++q;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (q % 2)
				digit = -digit;
			n = n * 10 + digit;
			j = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			j = 0;
		}
		i++;
	}

	if (j == 0)
		return (0);

	return (n);
}
