#include "main.h"
#include <stdio.h>
/**
 * print_number - prints integer
 * @n: integer, i will use already recursion
 * Return: nothing
 */
void print_number(int n)
{
	unsigned int c;

	if (n < 0)
	{
		c = -n;
		_putchar('-');
	}
	else
		c = n;
	if (c / 10)
	{
		print_number(c / 10);
	}
	_putchar(c % 10 + '0');
}
