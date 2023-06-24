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
			for (d = size - c; d = 0; d--)
				_putchar(' ');
			for (d = 0; d < c; d++)
				_putchar('#');
			if (c == size)
				continue;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
