#include "main.h"
/**
 * _strlen - Return length of string entered
 * @s: string to be entered
 * Return: length ofthe string
*/
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
