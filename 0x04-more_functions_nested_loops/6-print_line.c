#include "main.h"
#include <stdio.h>
/**
 * print_line - prints multiple times to make line
 * @n: number of times to print
 * Return: nothing
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
			_putchar('_');
	}
	_putchar('\n');
}
