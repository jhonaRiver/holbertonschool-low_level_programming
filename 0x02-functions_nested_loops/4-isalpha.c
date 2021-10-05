#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input character to be checked
 *
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalpha(int c)
{
	int alpha = 0;
	char lower = 'a', upper = 'A';

	while (lower <= 'z')
	{
		while (upper <= 'Z')
		{
			if (c == lower || c == upper)
			{
				alpha = 1;
				break;
			}
			upper++;
		}
		lower++;
	}
	return (alpha);
}
