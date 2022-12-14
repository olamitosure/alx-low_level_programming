#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */

int _islower(int c);

{

	int b = 'a';

	for (b = 'a'; b <= 'z'; b++)

	{

		/* refer int c*/

		if (c == b)

		{

			return (1);

		}

	}

	return (0);


}
