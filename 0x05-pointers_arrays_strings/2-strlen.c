#include "main.h"
/**
 * _strlen - returns length of string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++);
	return (index);
