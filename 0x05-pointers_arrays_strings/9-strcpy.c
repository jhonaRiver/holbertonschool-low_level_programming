#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest: destination of string
 * @src: source string to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	return (temp);
}
