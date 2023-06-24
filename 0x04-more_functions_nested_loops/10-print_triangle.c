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
			for (d = size; d <= size; d++)
				_putchar(' ');
			for (e = 1; e <= c; e++)
				_putchar('#');
			if (c == size)
				continue;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
