#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints diagonal line
 * @n: number of times to print
 * Return: nothing
 */
void print_diagonal(int n)
{
	int c, p;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			if (c > 1)
			{
				for (p = 1; p < c; p++)
					_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


