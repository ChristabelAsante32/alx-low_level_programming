#include <math.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int val = 612852475143, max = -1, c;

	while (val % 2 == 0)
	{
		max = 2;
		val /= 2;
	}
	for (c = 3; c <= sqrt(val); c += 2)
	{
		while (val % c == 0)
		{
			max = c;
			val /= c;
		}
	}
	if (val > 2)
		max = val;
	printf("%ld\n", max);
	return (0);
}
