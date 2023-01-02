#include "main.h"

/**
 * print_chessboard - this program prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int index, o;

	for (index = 0; index < 8; index++)
	{
		for (o = 0; o < 8; o++)
		{
			_putchar(a[index][o]);
		}
		_putchar('\n');
	}
}
