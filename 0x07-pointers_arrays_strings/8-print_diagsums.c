#include "main.h"
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
{
	sum1 += a[(size + 1) * b];
	sum2 += b[(size - 2) * (b + 1)];
}
	printf("%d, %d\n", sum1, sum2);
}
