#include "main.h"
/**
* _islower - tells whether a character is lowercase
* @c: a letter between quotes or its ascii equivalent or anything
*
* Return: 1 if lowercase and 0 otherwise
*/

int _islower(int c)
{
	int alph;

	if (c >= 'a' && c <= 'z')
		alph = 1;
	else
		alph = 0;
	return (alph);
}
