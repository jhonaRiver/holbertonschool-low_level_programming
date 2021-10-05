#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: input character given to check if it's lowercase
 * Return: lower is 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	int lower = 0;
	char i = 'a';

	while (i <= 'z')
	{
		if (i == c)
		{
			lower = 1;
			break;
		}
		i++;
	}
	return (lower);
}
