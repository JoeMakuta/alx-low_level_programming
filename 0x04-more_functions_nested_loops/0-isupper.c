#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - Check uppercase
 * @c: the character to be checked
 * Return: 1 if c is uppercase , 0 otherwise
 */

int _isupper(char c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	return (0);
}
