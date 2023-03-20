#include "main.h"

/**
 *_memcpy - this program copies memory area
 * @dest: destination for memory area
 * @src: source of the memory
 * @n: shows length of src
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int h;
for (h = 0; h < n; h++)
{
dest[h] = src[h];
}
return (dest);
}
