#include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: the source string to append to @dest
 *@dest: the destination string to be concatenated upon
 *Return:pointer to the resulting string
*/
char *_strcat(char *dest, char *src)

{
	char x = 0;
	char y = 0;

	while (dest[x++])
		y++;
	for (x = 0; src[x]; x++)
		dest[y++] = src[x];
	return (dest);

}
