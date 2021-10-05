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
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}
