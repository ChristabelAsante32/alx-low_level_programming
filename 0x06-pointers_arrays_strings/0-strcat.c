#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	printf("strcat (dest, src): %s\n", dest);
	return (dest);
}
/**
 * main - Entry point
 * This function demonstrates the usage of _strcat to concanates strings
 * Return: 0
 */
int main(void)
{
	char str1[20] = "Hello";
	char str2[] = "World";

	_strcat(str1, str2);
	return (0);
}
