#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints numbers 10 times
 * Return: nothing
 */
void more_numbers(void)
{
	int c, p;

	for (c = 1; c <= 10; c++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
				_putchar(p / 10 + '0');
			_putchar(p % 10 + '0');
		}
		_putchar('\n');
	}
}
