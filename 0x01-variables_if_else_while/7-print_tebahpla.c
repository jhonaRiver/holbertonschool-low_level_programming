#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowerAlpha = 'z';

	while (lowerAlpha >= 'a')
	{
		putchar(lowerAlpha);
		lowerAlpha--;
	}
	putchar('\n');
	return (0);
}
