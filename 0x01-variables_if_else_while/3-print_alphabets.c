#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'l';
		while (ch <= 'Z')
		{
			putchar(ch);
			ch++;
		}
	putchar('\n');
	return (0);
}

