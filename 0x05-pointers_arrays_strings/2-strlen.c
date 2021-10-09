#include "main.h"

/**
 * _strlen - Gets the length of a string
 * @s: String to be checked
 * Return: Length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
