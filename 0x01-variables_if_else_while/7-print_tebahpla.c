#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *Return: 0 on success
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
