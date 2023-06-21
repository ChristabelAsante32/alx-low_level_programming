#include "main.h"
/**
* _isalpha - tells whether a character is a letter, lower or uppercase
* @c: a letter between quotes or its ascii equivalent or anything
*
* Return: 1 if a letter and 0 otherwise
*/

int _isalpha(int c)
{
	int alph;

	if ((c >= 65 && c <= 90) || (c >= 'a' && c <= 'z'))
		alph = 1;
	else
		alph = 0;
	return (alph);
}
