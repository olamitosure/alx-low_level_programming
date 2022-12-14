#include "main.h"
/**
* _islower _ Entry point - prints lower case 
* Description: checks a character that is lowercase
 *@c: the int  value it receives
* Return 1 if true. 0 if false
*/

int islower(int c)
{
	int y = 'a';

	for (y = 'a'; y <= 'z'; y++)
	{
		/* refer int c*/
		if (c == y)
		{
		return (1);
		}
	{
	return (0);
