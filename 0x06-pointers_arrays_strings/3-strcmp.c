#include "main.h"
/**
 * _strcmp - function that compares string
 * @s1: First pointer to compare string
 * @s2: Second pointer to compare string
 * Return: If str1 < str2, the negative difference
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
