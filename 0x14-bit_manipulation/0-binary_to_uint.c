#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars
 * Return: converted number or 0 if b does not have 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, count = 0, sum = 0;

	if (b == NULL)
	{
		return (0);
	}
	len = _strlen(b);
	while (len--)
	{
		if (b[len] != 48 && b[len] != 49)
		{
			return (0);
		}
		if (b[len] == 49)
		{
			sum += 1 << count;
		}
		count++;
	}
	return (sum);
}

/**
 * _strlen - Returns the length of a string
 * @s: string to count
 * Return: s length
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
	{
		c++;
	}
	return (c);
}
