#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: 0
 */

void print_diagonal(int n)

{

int a, c;
for (c = 1; c <= n; c++)
{
for (a = 1; a < c; a++)
_putchar(' ');
_putchar('\\');
_putchar('\n');

}
if (n < 1)
_putchar('\n');

}
