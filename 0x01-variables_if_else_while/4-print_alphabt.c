#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowerAlpha = 'a';

	while (lowerAlpha <= 'z')
	{
		if (lowerAlpha != 'e' && lowerAlpha != 'q')
			putchar(lowerAlpha);
		lowerAlpha++;
	}
	putchar('\n');
	return (0);
}
