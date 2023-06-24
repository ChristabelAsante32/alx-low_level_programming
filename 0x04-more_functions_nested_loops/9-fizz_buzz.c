#include "main.h"
#include <stdio.h>
/**
 * main - prints fizz and buzz
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0)
			printf("Fizz");
		if (c % 5 == 0)
			printf("Buzz");
		if ((c % 3 != 0) && (c % 5 != 0))
			printf("%d", c);
		if (c < 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
