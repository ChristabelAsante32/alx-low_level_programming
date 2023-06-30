#include "main.h"
/**
 * reverse_array - Reserves the content of an array of integers
 * @a: array integer to be reversed
 * @n: numbeer of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - index] = a[index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
