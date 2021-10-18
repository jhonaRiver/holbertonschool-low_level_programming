#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Input string
 * @accept: Input character to locate into s
 * Return: Pointer to c position
 */

unsigned int _strspn(char *s, char *accept)
{
	int position = 0, flag;
	char *start = accept;

	while (*s)
	{
		flag = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				position++;
				flag = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (flag == 0)
		{
			break;
		}
	}
	return (position);
}
