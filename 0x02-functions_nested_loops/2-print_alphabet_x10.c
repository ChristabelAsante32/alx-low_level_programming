#include "main.h"
/**
 * print_alphabet_x10 - This function
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	char alph = 'a';
	int n;

	for (n = 1; n <= 10; n++)
		while (alph <= 'z')
		{
			_putchar(alph);
			       alph++;
		}
	_putchar ('\n');
}
