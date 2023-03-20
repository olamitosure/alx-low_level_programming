#include "main.h"

/**
 * _strpbrk - this program searches a string for any set of bytes.
 * @s: shows string to be searched.
 * @accept: all  set of bytes being searched for.
 * Return: A pointer to the matched byte if a set is found
 * If otherwise - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return ('\0');
}
