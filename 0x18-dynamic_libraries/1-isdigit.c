#include "main.h"
#include <stdio.h>
/**
* _isdigit - check for a digit from 0 through 9
* @c: character to be examine
* Return: 1 if true and 0 if otherwise
*/
int _isdigit(int c)
{

	if (c >= '0' && c <= '9')

		return (1);

	return (0);
}
