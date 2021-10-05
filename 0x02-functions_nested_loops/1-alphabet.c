#include <stdio.h>

/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - Prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	char lowAlpha = 'a';

	while (lowAlpha <= 'z')
	{
		_putchar(lowAlpha);
		lowAlpha++;
	}
	_putchar('\n');
}
