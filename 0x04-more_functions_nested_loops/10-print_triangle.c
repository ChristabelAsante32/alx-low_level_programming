#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints triangle
 * @size: sze of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int c, d, e;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (d = 1; d <= size; d++)
				_putchar(' ');
			for (e = 1; e <= c; e++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
