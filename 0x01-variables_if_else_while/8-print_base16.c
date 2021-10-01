#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int num = '0';
	char lowerAlpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (lowerAlpha <= 'f')
	{
		putchar(lowerAlpha);
		lowerAlpha++;
	}
	putchar('\n');
	return (0);
}
