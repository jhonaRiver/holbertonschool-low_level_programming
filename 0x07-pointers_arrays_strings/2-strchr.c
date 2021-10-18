#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to search in
 * @c: Character to look for
 * Return: Pointer to position of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (c == *s)
	{
		return (s);
	}
	return (NULL);
}
