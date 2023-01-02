#include "main.h"

/**
 * _strspn - this program determines the length of a prefix substring.
 * @s: indicates string to be searched.
 * @accept:  prefix being measured.
 * Return: The number of bytes in s which
 * carries bytes gotten from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
bytes++;
break;
}
else if (accept[i + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
