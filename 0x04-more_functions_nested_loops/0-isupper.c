#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: input character to be checked
 * Return: 1 if is uppercase 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
