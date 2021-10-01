#include <stdio.h>

/*
 * Prints the alphabet in lowercase and then in uppercase.
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
