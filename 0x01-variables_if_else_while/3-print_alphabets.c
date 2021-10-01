#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowerAlpha = 'a';
	char upperAlpha = 'A';

	while (lowerAlpha <= 'z')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	while (upperAlpha <= 'Z')
	{
		putchar(upperAlpha);
		upperAlpha++;
	}
	putchar('\n');
	return (0);
}
