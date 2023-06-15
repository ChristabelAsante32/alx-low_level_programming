#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %ld bytes(s)\n", sizeof(char));
printf("Size of an int: %ld bytes(s)\n", sizeof(int));
printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
printf("Size of float: %ld bytes(s)\n", sizeof(float));
return (0);
}
