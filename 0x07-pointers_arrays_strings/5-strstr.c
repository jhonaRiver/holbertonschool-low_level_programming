#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: Input string to search in
 * @needle: Input string to locate in haystack
 * Return: Pointer to the beginning of the located substring, or NULL if not
 * found
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = starth + 1;
	}
	return ('\0');
}
