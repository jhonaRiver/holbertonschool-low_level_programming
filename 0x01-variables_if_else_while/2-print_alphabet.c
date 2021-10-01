#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char lowAlpha = 'a';

	while (lowAlpha <= 'z')
	{
		putchar(lowAlpha);
		lowAlpha++;
	}
	putchar('\n');
	return (0);
}
