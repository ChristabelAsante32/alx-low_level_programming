#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps value of integers
 * @a: first entry variable
 * @b: second entry variable
 */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
