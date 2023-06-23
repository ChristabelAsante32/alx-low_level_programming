#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int c, p;

	for (p = 0; p <= 10; p++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
