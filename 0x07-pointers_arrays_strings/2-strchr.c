#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strchr - locates a character in a string
 * @s: the string to check
 * @c: character to look for
 * Return: a pointer to the first occurrence of the character c in the string s
 * @s. Return NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	{
	if (c == '\0')
		return (s);
	}

		return (NULL);
}
