#include <stdio.h>
#include <stdlib.h>
/**
 *main - Entry point
 *Return: 0 on success
 */

int main(void)
{
	int ch = 'a', i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
