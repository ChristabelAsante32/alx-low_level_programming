#include "main.h"
/**
 * _puts - prints a give string to the stdout
 * @str: input string
 * Return: nothing
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
