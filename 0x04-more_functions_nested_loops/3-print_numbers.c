#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * takes no parameters
 * Return: no return
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		_putchar(c + '0');
	_putchar('\n');
}
