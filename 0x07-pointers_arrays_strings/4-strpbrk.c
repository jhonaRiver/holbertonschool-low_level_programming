#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Input string
 * @accept: Input character to locate into s
 * Return: Pointer to byte in s that matches one of the bytes in accept, or
 * NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
