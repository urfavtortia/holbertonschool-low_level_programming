#include "holberton.h"
/**
 * swap_int - swaps integers
 * @a: value
 * @b: value
 */
void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
