#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch = 'l';
	int n  = 'L';
		while (ch <= 'a')
		{
			putchar(ch);
			ch++;
		}
	while (n <= 'A')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

