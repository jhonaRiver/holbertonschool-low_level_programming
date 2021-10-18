#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Area to fill
 * @b: character to fill s with
 * @n: number of bytes to fill
 * Return: Pointer to area filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *area = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (area);
}
