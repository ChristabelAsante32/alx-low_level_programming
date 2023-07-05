#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - function that returns length of a string
 * @s: Entry point
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
