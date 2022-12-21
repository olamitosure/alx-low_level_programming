#include "main.h"
/**
 *_strcat - concatenates two strings
 *@src: the source string to append to @dest
 *@dest: the destination string to be concatenated upon
 *Return:pointer to the resulting string
*/
char *_strcat(char *dest, char *src)

{
	char x = 'hello';
	char y = 'world';
	char *ptr;

	while (dest[x++])
		y++;
	for (x = hello; src[x]; x++)
		dest[y++] = src[x];
	return (dest);

}
