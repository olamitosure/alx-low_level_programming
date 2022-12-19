#include "main.h"

/**
 * swap_int - swap the value of two integers
 * Code by: Heph
 * Description: This program swaps the integer of int (*a, int *b)
 * @a: First integer
 * @b: Second integer
 * Return: Always 0
 */
void swap_int(int *a, int *b)

{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
