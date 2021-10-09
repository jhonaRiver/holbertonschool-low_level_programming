#include "main.c"

/**
 * swap_int - Swaps the value of two integers
 * @a: Input integer
 * @b: Input integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
