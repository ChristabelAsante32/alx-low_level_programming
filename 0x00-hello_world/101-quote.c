#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (success)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), 59, stderr);

	return (1);
}
