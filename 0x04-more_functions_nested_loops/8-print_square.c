#include "main.h"
#include <include.h>
/**
 * print_square - print multiple lines to make square
 * @size: number of times to print
 * Return: nothing
 */
void print_square(int size)
{
	int c, p;

	if (size > 0)
	{
		for (c = 1; c <= size; c++)
		{
			for (p = 1; p <= size; p++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
		else
			_putchar('\n');
}
