#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int m;

	m = 10;
		if (m > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, m);
		else if (m == 0)
			printf("Last digit of %d is %d and is zero\n", n, m);
		else
			printf("Last digit of %d is %d and is less than 6\n", n, m);

	return (0);
}
