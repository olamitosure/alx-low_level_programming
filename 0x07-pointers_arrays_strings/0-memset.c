#include "main.h"

/**
 *_memset - this setting fills memory with a constant byte.
 * @s: pointer puts the constant
 * @b: constant
 * @n: maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int h;
for (h = 0; n > 0; h++, n--)
{
s[h] = b;
}
return (s);

}
