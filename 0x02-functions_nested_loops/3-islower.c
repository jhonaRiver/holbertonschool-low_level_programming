#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: input character given to check if it's lowercase
 * Return: lower is 1 if c is lowercase or 0 otherwise
 */

int _islower(int c)
{
	int lower;

	if (c <= 65 || c >= 90)
	{
		lower = 0;
	}
	else
	{
		lower = 1;
	}
	return (lower);
}
