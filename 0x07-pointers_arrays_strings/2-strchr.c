#include "main.h"

/**
 * _strchr - program locates a character in a string.
 * @s: as string to be searched.
 * @c: indicates the character to be located.
 * Return: If c is found - occur as pointer to the first occurence.
 * If c is not found - NULL.
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] >= '\0'; i++)

{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
