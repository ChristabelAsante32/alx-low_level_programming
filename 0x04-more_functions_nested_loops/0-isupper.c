#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks for uppercase
 * @c: character whose status to check
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}